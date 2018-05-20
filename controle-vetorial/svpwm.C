
#define Vret 800
#define freq_pwm 8000.0

double perpwm = 1.0 / freq_pwm;
double T = (1.0 / freq_pwm) / 2.0; // PWM simetrico
int meio_ciclo = 0;
double tpwm = 0, tamost = 0, tvc = 0;
double tala = 0, talb = 0, talc = 0;

void svpwm_3__(double *dt, double *va, double *vb, double *vc, double *t1, double *t2, double *t3)
{
        if (tamost >= perpwm)
        {
                tamost = 0;
                tala = T / 2.0 + T * (*va) / Vret;
                talb = T / 2.0 + T * (*vb) / Vret;
                talc = T / 2.0 + T * (*vc) / Vret;
                if (tala >= T)
                        tala = T;
                if (tala <= 0)
                        tala = 0;
                if (talb >= T)
                        talb = T;
                if (talb <= 0)
                        talb = 0;
                if (talc >= T)
                        talc = T;
                if (talc <= 0)
                        talc = 0;
        }
        if (tpwm >= T)
        {
                tpwm = 0;
                meio_ciclo = 1 - meio_ciclo;
        }
        switch (meio_ciclo)
        {
        case 0:
                if (tpwm > T - tala)
                        *t1 = 1;
                else
                        *t1 = 0;
                if (tpwm > T - talb)
                        *t2 = 1;
                else
                        *t2 = 0;
                if (tpwm > T - talc)
                        *t3 = 1;
                else
                        *t3 = 0;
                break;
        case 1:
                if (tpwm > tala)
                        *t1 = 0;
                else
                        *t1 = 1;
                if (tpwm > talb)
                        *t2 = 0;
                else
                        *t2 = 1;
                if (tpwm > talc)
                        *t3 = 0;
                else
                        *t3 = 1;
                break;
        }
        tpwm = tpwm + *dt;
        tamost = tamost + *dt;
}
