/* decompose without pointers*/

#include <stdio.h>

void decompose(double x, long int_part, double frac_part){
    int_part = (long) x; // drops the fractional part
    frac_part = x - int_part;
    printf("%ld %g\n", int_part , frac_part);
}

int main(){

    double pi = 3.14159;
    long i;
    double f;

    decompose(pi, i, f);

    printf("%ld %g\n", i , f);
}