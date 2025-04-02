#include <stdio.h>
#include <stdlib.h>
int sumSqps(const int* liczba1, const int* liczba2){
    return (*liczba1) * (*liczba1) +(*liczba2) * (*liczba2);
}
int main()
{
    const int a = 5;
    const int b = 12;
    int wynik = sumSqps(&a, &b);
    printf("Suma kwadratow wynosi: %d\n", wynik);
    return 0;
}
