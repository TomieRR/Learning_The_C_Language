#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a>b){
        printf("Liczba wieksza to: %d\n",a);
    }
    else{
        printf("Druga liczba jest wieksza:%d",b);
    }
    return 0;
}
