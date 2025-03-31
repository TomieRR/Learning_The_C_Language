#include <stdio.h>

double znajdz_Max(const double *num1, const double *num2) {
    return (*num1 > *num2) ? *num1 : *num2;
}

int main() {
    double a = 5.5, b = 3.2;
    printf("Max value: %f\n", znajdz_Max(&a, &b));
    return 0;
}
