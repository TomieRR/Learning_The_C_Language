#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int cyfra;
    int sumacyfr = 0;
    if (n == 0){
        printf("Cyfra 0\n");
    }else{
        if (n < 0){
            n = -n;
        }
        while (n > 0){
            cyfra = n % 10;
            printf("Cyfra %d\n", cyfra);
            sumacyfr += cyfra;
            n /= 10;
        }
        printf("Suma cyfr %d\n", sumacyfr);
    }
    return 0;
}
