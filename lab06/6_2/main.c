#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, suma = 0, i = 1;
    printf("Podaj liczbe calkowita n: ");
    scanf("%d", &n);
    while(i <= n){
        suma += i;
        i++;
    }
    printf("Suma wszystkch liczb calkowitych od 1 do %d wynosi: %d\n", n, suma);
    return 0;
}
