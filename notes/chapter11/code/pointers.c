/* my notes */

#include <stdio.h>

int main(){

    int x = 42;
    // int *p_x;
    // p_x = &x;

    printf("%d\n", *&x);

    int i, *pp, *p = &i;
    pp = &i;

    printf("%p\n", p);
    printf("%p\n", pp);
    printf("%p\n", p);


    return 0;      
}