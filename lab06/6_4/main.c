#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;
    int i;
    int silnia = 1;

    printf("wprowadz liczbe calkowita nieujemna n: \n");
    scanf("%d", &n);

    if (n < 0){
        printf("Podana liczba jest ujemna, wprowadz liczbe nieujemna \n");
    }else{
    for (i = 1; i <= n; i++){
        silnia *= i;
    }
    printf("Silnia z %d wynosi %d\n", n, silnia);
    }
    return 0;
}
