#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("Podaj liczbe n: \n");
    scanf("%d", &n);
    printf("Dzielniki liczby %d to: \n", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
