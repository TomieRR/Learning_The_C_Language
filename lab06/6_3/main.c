#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int sum_dod= 0;
    int sum_uje = 0;


    printf("Wprowadz liczby calkowite\n");

    do{
        scanf("%d", &a);
    if (a > 0){
        sum_dod += a;
    } else if (a < 0){
        sum_uje += a;
    }
}
    while (a != 0);

    printf("Suma wszystkich dodatnich: %d\n", sum_dod);
    printf("Suma wszystkich ujemnych: %d\n", sum_uje);

    return 0;
}
