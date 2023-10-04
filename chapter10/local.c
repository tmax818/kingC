

#include <stdio.h>


int sum_digits(int n);

int main(){

    int sum = sum_digits(4);
    printf("%d\n", sum);


}

int sum_digits(int n){
    int sum = 0;  // local variable

    while(n > 0) {
        sum += n;
        n--;
    }

    return sum;
}