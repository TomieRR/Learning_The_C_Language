#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c, roznica;
    printf("Podaj trzy liczby zmiennoprzecinkowe: \n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    roznica = (1 / a) - (b / (2+c));
    printf("Wynik dzialania programu to: %lf", roznica);

    return 0;
}
