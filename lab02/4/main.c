#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;
    printf("podaj pierwsza litere: ");
    scanf(" %c", &a);
    getchar();
    printf("podaj druga litere: ");
    scanf(" %c", &b);
    printf("Liczby w odwrotnej kolejnosci: %c %c \n", b, a);
    return 0;
}
