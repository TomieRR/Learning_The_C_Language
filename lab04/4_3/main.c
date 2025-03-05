#include <stdio.h>
#include <stdlib.h>

int main()
{
    //a to liczba b to pozycja c to wynik
    int a,b;
    printf("Podaj liczbe: \n");
    scanf("%d", &a);
    printf("Podaj pozycje bitu w liczbie: \n");
    scanf("%d", &b);
    int c = (a >> b) & 1;
    printf("Bit na pozycji %d wynosi: %d\n", b, a);
    return 0;
}
