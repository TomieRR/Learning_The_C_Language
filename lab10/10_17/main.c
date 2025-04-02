#include <stdio.h>
#include <stdlib.h>
void swapSign(double* ptr1, double* ptr2){
    if (((*ptr1) * (*ptr2))< 0){
        double temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}
int main()
{
    double a = 4.0;
    double b = -5.2;
    printf("Przed zamiana: a = %.2f, b = %.2f\n", a , b);
    swapSign(&a, &b);
    printf("po zmianie: a = %.2f, b = %.2f\n", a , b);
    return 0;
}
