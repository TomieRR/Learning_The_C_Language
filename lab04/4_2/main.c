#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Podaj liczbe: \n");
    scanf("%d", &a);
    char *opcje[2] = {"liczba parzysta\n", "Liczba nieparzysta\n"};
    printf("%s", opcje[a%2]);
    return 0;
}
