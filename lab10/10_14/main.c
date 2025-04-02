#include <stdio.h>
#include <stdlib.h>
double mulPtrs(const double* liczba1, const double* liczba2){
    return (*liczba1) * (*liczba2);
}
int main()
{
    const double a = 3.5;
    const double b = 5.0;
    double wynik = mulPtrs(&a, &b);
    printf("Iloczyn wynosi: %.2f\n", wynik);
    return 0;
}
