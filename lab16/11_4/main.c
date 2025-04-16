#include <stdio.h>
#include <stdlib.h>

int cmpStrNew(char tab1[], char tab2[]){
    int i =0;

     while (tab1[i] != '\0' && tab2[i] != '\0') {
        if (tab1[i] != tab2[i]) {
            return 0;
        }
        i++;
    }
    if(tab1[i] == '\0' && tab2[i] == '\0'){
        return 1;
    }else{
        return 0;
}

}

int main()
{
    char napis1[] = "Testowytekst";
    char napis2[] = "Testowytekst";
    char napis3[] = "TestowyText";

    printf("Porownanie 1: %d\n", cmpStrNew(napis1, napis2));
    printf("Porownanie 2: %d\n", cmpStrNew(napis1, napis3));
    return 0;
}
