#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Podaj liczbe w dolarach: ");
    scanf("%f", &a);
    a = a * 0.85;
    printf("Wartosc w euro to: %f", a);
    return 0;
}
