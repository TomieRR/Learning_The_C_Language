#include <stdio.h>
#include <stdlib.h>

void kopiowanie(char *n1, char *n2){
    int i = 0;
    while (i<4 && n1[i] != '\0'){
        n2[i] = n1[i];
        i++;
    }
    n2[i] = '\0';
}

int main()
{
    char test1_n1[] = "Testowytekst";
    char test1_n2[20];
    kopiowanie(test1_n1,test1_n2);
    printf("Test 1: '%s' tworzy wyraz '%s' \n",test1_n1,test1_n2);

    char test2_n1[] = "Kott";
    char test2_n2[] = "Pies";;
    kopiowanie(test2_n1,test2_n2);
    printf("Test 2: '%s' tworzy wyraz '%s' \n",test2_n1,test2_n2);
    return 0;
}
