#include <math.h>

//#define dt 0.000001 //1E-6
#define dt 0.01 //1E-6
#define dt_2 dt* dt

#define a0 1.0
#define b1 0.040133147263327
#define b2 0.000805578039197

double B1 = (-(b1 / dt + b2 / dt_2));
double B2 = (b1 / dt + 2 * b2 / dt_2);
double B3 = (-(b2 / dt_2));

double y_1 = 0;
double y_2 = 0;
double y_3 = 0;

void fbwh4hz_(double* in, double* out){

    *out = a0 * (*in) + B1 * y_1 + B2 * y_2 + B3 * y_3;
    y_3 = y_2;
    y_2 = y_1;
    y_1 = *out;
}