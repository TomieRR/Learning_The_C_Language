#include <stdio.h>
int main(){
    int a,b;
    printf("Podaj wpolczynniki a i b: \n");
    scanf("%d%d",&a,&b);
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    printf("Najwiekszy wspolny dzielnik to: %d\n",a);
    return 0;
}
