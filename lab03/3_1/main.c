#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a%2 !=0){
        printf("Nieparzysta\n");
    }
    else{
        printf("Parzysta");
    }
    return 0;
}
