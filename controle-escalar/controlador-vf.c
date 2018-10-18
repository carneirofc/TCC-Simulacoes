/**
 * Controle Escalar V/f
 *  
 */
  
#include <math.h>

#define pi 3.14159265358979323846
#define two_pi pi * 2
#define wBaixaRotacao 94.25

// Saturação da Integral do Erro (em nenhum mommento na simulação a integral passou de 0.4)
#define limIntErroW 1.2 

// integrador
double xout_ant = 0, xin_ant = 0;

double teta = 0;
double int_e_W = 0;
double e_W_Ant = 0;

/**
 * Constantes utilizadas normalmente
 * */
double kpW = 5.2, kiW = 50.0; // kpW = 0.7, kiW = 0.51;
/**
 * Constantes utilizadas para baixax rotações
 * */
double kpW_L = 9.0, kiW_L = 10.0; // 5.5, kiW_L = .02; kiW_L = 0.0001

/**
 * Rampa de Aceleração
 * */
double lim_rampa = 500, W_rampa_1 = 0, W_rampa = 0, Tax = 0;

void dqToABC_ControleVF(double* d, double* q, double* a, double* b, double* c)
{
    *a = *d;
    *b = -0.5 * *d + (sqrt(3.0) / 2.0) * *q;
    *c = -0.5 * *d - (sqrt(3.0) / 2.0) * *q;
}

/**
 * Função de Integração
 * W->Teta
 */
void intreg(double* dt, double* xin, double* xout)
{
    *xout = xout_ant + ((*xin + xin_ant) / 2.) * (*dt);
    if (*xout >= two_pi || *xout <= -two_pi)
        *xout = 0;
    xout_ant = *xout;
    xin_ant = *xin;
}

 void scalar_vfw__(double* dt, double* W_ref, double* W_med, double* v1, double* v2, double* v3, double* wRefRampa){
    double e_W, W, vref, vd, vq, W_cont, kp, ki ;

    // Verificando se está ou não em baixa rotação e escolhendo os parâmetros de controle adequados
    if (fabs(*W_ref) >= wBaixaRotacao) {
        kp = kpW;
        ki = kiW;
    } else {
        kp = kpW_L;
        ki = kiW_L;
    }

    // Rampa de Aceleração
    Tax = (*W_ref - W_rampa_1) / *dt;
    if (Tax > lim_rampa) {
        W_rampa = *dt * lim_rampa + W_rampa_1;
    } else if (Tax < -lim_rampa) {
        W_rampa = *dt * (-lim_rampa) + W_rampa_1;
    } else { 
         W_rampa = *W_ref;
    }
   
    W_rampa_1 = W_rampa;

    // Controle Escalar
    e_W = W_rampa - *W_med; 
    int_e_W += ((e_W + e_W_Ant) / 2) * *dt;
    e_W_Ant = e_W;

    // Saturação da integral do erro
    if (int_e_W >= limIntErroW || int_e_W <= -limIntErroW) {
        int_e_W = -int_e_W * *dt;
    }

    W_cont = kp * e_W + ki * int_e_W;
    W = W_cont + 2.0 * (*W_med);
    
    intreg(dt, &W, &teta);
    
    if (W >= 188.5) {
        vref = ((W * 376) / 377.);
        if (vref >= 376)
            vref = 376;
        if (vref <= -376)
            vref = -376;
    } else {
        vref = (10 + ((W * 178) / 188.5));
    }

    // Polar para DQ
    vd = vref * cos(teta);
    vq = vref * sin(teta);

    // Transformação de ABC para DQ
    dqToABC_ControleVF(&vd, &vq, v1, v2, v3);
    *wRefRampa = W_rampa;
} 