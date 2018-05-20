#include <math.h>
#define vec_size 1000

double vec[vec_size];
int post = 0;
/*todo: implemetnar conforme 
  http://paginapessoal.utfpr.edu.br/scandelari/laboratorio-de-pds/Filtros_digitais_1.pdf/at_download/file

*/
void media_(double* in, double* out){
    int i = 0;
    vec[post] = *in;
    post++;
    if (post > (vec_size - 1)) {
        post = 0;
    }
    *out = 0;
    for (i = 0; i < vec_size; i++) {
        *out += vec[i];
    }
    *out /= vec_size;
}