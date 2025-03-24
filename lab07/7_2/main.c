#include <stdio.h>
#include <stdlib.h>

double ABS(double LiczbaABS){
    if (LiczbaABS < 0){
        return -LiczbaABS;
    }
    return LiczbaABS;
}
int main()
{
    double liczba;

    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%lf", &liczba);

    printf("Wartosc bezwzgledna %.2f to %.2f", liczba, ABS(liczba));
    return 0;
}

