#include <stdio.h>

#define C (4.0f/3.0f)
#define PI 3.14195
#define cube(n) (n*n*n)

int main() {

    float radius;
    printf("Enter a radius: ");
    scanf("%f", &radius);

    printf("%f\n", C * PI * cube(radius));

}