#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rok;
    scanf("%d", &rok);
    if (rok %4 !=0){
        printf("Rok nie jest przystepny\n");
    }
    else{
        if (rok %100 !=0){
            printf("rok jest przystepny\n");
        }
        else{
            if (rok %400 ==0){
                printf("Rok nie jest przystepny\n");
            }
        }
    }
    return 0;
}
