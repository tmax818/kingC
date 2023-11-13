/* checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>

int main(){

    bool digit_seen[10] = {false};
    int digit;
    long n = 12345678;

    while(n > 0){
        digit = n % 10;
        printf("%d", digit);
        n /= 10;
    }
}