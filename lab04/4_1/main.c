#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Podaj pierwsza liczbe: \n");
    scanf("%d", &a);
    printf("Podaj druga liczbe: \n");
    scanf("%d", &b);
    printf("------------------\n");
    printf("AND: Pierwszy wynik wynosi: %d\n",a & b);
    printf("OR: Drugi wynik wynosi: %d\n",a | b);
    printf("XOR: Trzeci wynik wynosi: %d\n",a ^ b);
    printf("LEFT SHIFT: Czwarty wynik wynosi: %d\n",a << b);
    printf("RIGHT SHIFT: Piaty wynik wynosi: %d\n",a >> b);
    return 0;
}
