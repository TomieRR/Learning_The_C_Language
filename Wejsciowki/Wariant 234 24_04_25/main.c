#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int suma = 0;

    printf("Podaj dodatnia liczbe calkowita n: \n");
    scanf("%d", &n);

    if (n <= 0 ) {
    printf("liczba musi byc dodatnia.");
    return 0;
    }
    for (int i = 1; i <=n ; i++){
        suma += i * i;
    }

    printf("Suma kwadratow liczb od 1 do %d wynosi: %d\n", n, suma);

    return 0;
}
