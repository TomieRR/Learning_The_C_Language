#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
// a to dochod, b to podatek
    printf("Podaj dochod: ");
    scanf("%d", &a);
    if (a <= 10000) {
        b = 0;
        printf("Podatek od podanego dochodu wynosi: %d \n", b);
    }
    else if (a <= 30000){
        b = (a-10000)*0.1;
        printf("Podatek od podanego dochodu wynosi: %d \n", b);
    }
    else if (a <= 100000){
        b = 2000 + ((a-30000)*0.2);
        printf("Podatek od podanego dochodu wynosi: %d \n", b);
    }
    else {
        b = 16000 + ((a-100000)*0.3);
        printf("Podatek od podanego dochodu wynosi: %d \n", b);
    }

    return 0;
}
