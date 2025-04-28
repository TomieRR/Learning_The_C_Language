#include <stdio.h>
#include <stdlib.h>

int zlicz_szestnastkowe(const char* tekst){
    int licznik = 0;
    for (int i=0; tekst[i];i++){
        char znak = tekst[i];
        if ((znak >= '0' && znak <='9')
            ||
            (znak >= 'A' && znak <= 'F')
            ||
            (znak >= 'a' && znak<= 'f')){
                licznik++;
        }
    }
        return licznik;
}

int main()
{
    const char *test = "0x1F3";
    int wynik = zlicz_szestnastkowe(test);

    printf("W Napisie znaleziono %d cyfr szestnastkowych \n", wynik);
    return 0;
}
