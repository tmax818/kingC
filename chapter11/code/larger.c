
#include <stdio.h>

int *max(int *a, int *b);

int main(void){

int max_param = 99; 
int min_param = 4;

int *themax = max(&max_param, &min_param);

printf("%d\n", *themax);

return 0;
}

int *max(int *a, int*b){
    if(*a > *b) return a; else return b;
}