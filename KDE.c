#include <R.h>
#include <Rmath.h>
#include <math.h>



void kernal_density_gauss (double *x, int *n, double *b,
	       double *g, int *m, double *est)
{
    int i,j;
    double a1, c,term;
    term = 1 / (*b * sqrt(2 * M_PI));
    for(i = 0; i < *m; i++){
        a1 = 0.0;
        
        for(j=0; j < *n; j++){
            c = term * exp(-1 * pow(x[j] - g[i], 2) / (2 * *b * *b));
            a1 += c;
            }
        est[i] = a1 / *n;
        }
    }
