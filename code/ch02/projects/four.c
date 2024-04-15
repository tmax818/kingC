#include <stdio.h>

#define TAX 0.05

int main() {

    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%.2f\n", amount * TAX + amount);


}