#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    double pierwiastek, sufit;

    printf("Podaj dodatnia liczbe calkowita\n");
    scanf("%d", &n);

    if (n <= 0){
        printf("Liczba nie jest dodatnia\n");
        return 1;
    }
    pierwiastek = sqrt(n);
    sufit = ceil(pierwiastek);
    printf("Sufit pierwiastka z %d wynosi %.0f.\n", n, sufit);
    return 0;
}
