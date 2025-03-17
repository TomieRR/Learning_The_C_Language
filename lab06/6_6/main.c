#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe calkowiata n: \n ");
    scanf("%d", &n);
    int  i=0;
    while(i*i <=n){
        i++;
    }
    printf("czesc calkowita z pierwiastka kwadratowego %d\n wynosi: ", i-1);
    return 0;
}
