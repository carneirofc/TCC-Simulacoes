
////////////////////////////////
//  controle vetorial da MI   //
////////////////////////////////

#define Rr 1.083
#define Lr 0.209674
#define Lm 0.2037
#define Ls 0.209674
#define sigma 0.05617191303

#define pi2by3 2.09439510239
#define pi2 6.28318530718

#define Fluxo_ref 1 //0.85
#define I_max 9.0
#define Te_max 24
#define V_max 376

double inte_W = 0.0, Te, teta_R = 0.0, Ws_ant = 0.0, teta_R_ant = 0.0;
double inte_Id = 0.0, inte_Iq = 0.0;

double Kp_W = 18, Ki_W = 1;
double Kp_I = 100, Ki_I = 1500;

/**
 * Rampa de Aceleração
 * */
double Tax, lim_rampa = 500, W_rampa_1 = 0, W_rampa = 0;

void vectorcontrol_(double* dt, double* Ia_med, double* Ib_med, double* Ic_med, double* Wm_ref,
    double* Wm_med, double* Van_ref, double* Vbn_ref, double* Vcn_ref, double* Wm_ref_rampa,
    double* debug1, double* debug2, double* debug3, double* debug4, double* debug5)
{
    double e_Wm, e_Id, e_Iq, Vd_ref, Vq_ref, Id_ref, Iq_ref, Wsl, Ws, Id_med, Iq_med, Vd_des, Vq_des;

    // Rampa de Aceleração
    Tax = (*Wm_ref - W_rampa_1) / *dt;
    if ((Tax > lim_rampa) && (Tax < -lim_rampa)) {
        W_rampa = *Wm_ref;
    } else if (Tax > lim_rampa) {
        W_rampa = *dt * lim_rampa + W_rampa_1;
    } else {
        W_rampa = *dt * (-lim_rampa) + W_rampa_1;
    }

    W_rampa_1 = W_rampa;

    //	 Ic_med = -(*Ia_med + *Ib_med);

    ////  PI de e_Wm p/ T  ////
    e_Wm = W_rampa - *Wm_med;
    inte_W += e_Wm * (*dt);
    Te = Kp_W * e_Wm + Ki_W * inte_W;

    if (Te > Te_max) {
        Te = Te_max;
        inte_W -= e_Wm * (*dt);
    }
    if (Te < -Te_max) {
        Te = -Te_max;
        inte_W -= e_Wm * (*dt);
    }

    /////  ////
    Id_ref = Fluxo_ref / Lm;
    Iq_ref = (Te * Lr) / (3 * Lm * Lm * Id_ref);

    ////  saturador de corrente   ////
    if (Iq_ref >= I_max) {
        Iq_ref = I_max;
    } else if (Iq_ref <= -I_max) {
        Iq_ref = -I_max;
    }

    ////  calculo do Teta_R  ////
    Wsl = (Rr / Lr) * (Iq_ref / Id_ref);
    Ws = Wsl + 2 * *Wm_med;

    //// Integrador de 0 a 2PI   ////
    teta_R = teta_R_ant + ((Ws + Ws_ant) / 2) * (*dt);

    if (teta_R >= pi2) {
        teta_R -= pi2;
    }
    if (teta_R <= -pi2) {
        teta_R -= -pi2;
    }
    teta_R_ant = teta_R;
    Ws_ant = Ws;

    ////  transformada abc to DQ  ////
    Id_med = (*Ia_med * sin(teta_R) + *Ib_med * sin(teta_R - pi2by3) + *Ic_med * sin(teta_R + pi2by3)) * 2. / 3.;
    Iq_med = (*Ia_med * cos(teta_R) + *Ib_med * cos(teta_R - pi2by3) + *Ic_med * cos(teta_R + pi2by3)) * 2. / 3.;

    ////  PI de e_Id p/ Vd  ////
    e_Id = Id_ref - Id_med;
    inte_Id += e_Id * (*dt);
    Vd_ref = Kp_I * e_Id + Ki_I * inte_Id;
    if (Vd_ref >= V_max) {
        Vd_ref = V_max;
        inte_Id -= e_Id * (*dt);
    }
    if (Vd_ref <= -V_max) {
        Vd_ref = -V_max;
        inte_Id -= e_Id * (*dt);
    }

    ////  PI de e_Iq p/ Vq  ////
    e_Iq = Iq_ref - Iq_med;
    inte_Iq += e_Iq * (*dt);
    Vq_ref = Kp_I * e_Iq + Ki_I * inte_Iq;
    if (Vq_ref >= V_max) {
        Vq_ref = V_max;
        inte_Iq -= e_Iq * (*dt);
    }
    if (Vq_ref <= -V_max) {
        Vq_ref = -V_max;
        inte_Iq -= e_Iq * (*dt);
    }

    /////   Desacoplamento   ////
    Vd_des = -(Wsl * sigma * Ls * Iq_ref) - (Rr / Lr) * (Lm / Lr) * Fluxo_ref;
    Vq_des = Wsl * sigma * Ls * Id_ref + *Wm_med * (Lm / Lr) * Fluxo_ref;
    Vd_ref = Vd_ref + Vd_des;
    Vq_ref = Vq_ref + Vq_des;

    ////   Saturador de tensao  ////
    if (Vd_ref >= V_max) {
        Vd_ref = V_max;
    } else if (Vd_ref <= -V_max) {
        Vd_ref = -V_max;
    }

    if (Vq_ref >= V_max) {
        Vq_ref = V_max;
    } else if (Vq_ref <= -V_max) {
        Vq_ref = -V_max;
    }

    ////  transformada abc to DQ  ////
    *Van_ref = Vd_ref * sin(teta_R) + Vq_ref * cos(teta_R);
    *Vbn_ref = Vd_ref * sin(teta_R - pi2by3) + Vq_ref * cos(teta_R - pi2by3);
    *Vcn_ref = Vd_ref * sin(teta_R + pi2by3) + Vq_ref * cos(teta_R + pi2by3);

    *Wm_ref_rampa = W_rampa;

    *debug1 = Iq_ref;
    *debug2 = Iq_med;

    *debug3 = Vd_ref;
    *debug4 = Vq_ref;
    *debug5 = inte_W;
}