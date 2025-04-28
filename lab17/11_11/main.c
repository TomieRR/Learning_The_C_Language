#include <stdio.h>
#include <stdlib.h>

void rmLower(char *tab){
    int i = 0;
    int j = 0;

    while(tab[i] != '\0'){

        if (!(tab[i] >= 'a' && tab[i] <= 'z')){
            tab[j] = tab[i];
            j++;
        }
        i++;
    }
    tab[j] = '\0';
}

int main()
{
    char test[] = "sdgsdg32546fSFGHARHA";
    printf("TEST: %s\n", test);

    rmLower(test);
    printf("Po usunieciu malych liter: %s\n", test);
    return 0;
}
