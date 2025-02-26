#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj pierwsza liczbe:\n");
    printf("Podaj druga liczbe:\n");
    float a;
    float b;
    scanf("%f",&a);
    scanf("%f",&b);
    printf("Roznica liczb to %f:", a-b);
    return 0;
}
