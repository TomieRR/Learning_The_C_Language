#include <stdio.h>
#include <stdlib.h>
void rmDigits(char tab[]){
    int i = 0, j = 0;
    while (tab[i] != '\0'){
        if (tab[i] < '0' || tab[i] > '9'){
            tab[j] = tab[i];
            j++;
        }
        i++;
    }
    tab[j] = '/0';
}
int main()
{
    char tab[] = "ohige564iohrg";
    printf("Przed: %s\n", tab);
    rmDigits(tab);
    printf("Po: %s\n", tab);
    return 0;
}
