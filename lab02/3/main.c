#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, srednia;

    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &a);
    printf("Podaj druga liczbe: ");
    scanf("%f", &b);
    printf("Podaj trzecia liczbe: ");
    scanf("%f", &c);

    srednia = (a+b+c) / 3.0;

    printf("Srednia liczb wynosi: %.2f\n", srednia);
    return 0;
}
