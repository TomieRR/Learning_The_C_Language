#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a<b && a<c){
        printf("Liczba najmniejsza to: %d\n",a);
    }else if (b<a && b<c){
        printf("Liczba najmniejsza to: %d\n",b);
    }else if (c<a && c<b){
        printf("Liczba najmniejsza to: %d\n",c);
    }else{
    printf("Liczby nie moga byc takie same");
    }
    return 0;
}
