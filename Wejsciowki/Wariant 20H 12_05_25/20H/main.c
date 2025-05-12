#include <stdio.h>
#include <stdlib.h>

int funkcja(int n, int m, int **tab){
    int suma = 0;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if (tab[i][j] % 3 == 0){
                suma += tab[i][j];
            }
        }
    }
    return suma;
}

int main()
{
    int n = 3;
    int m = 4;
    int i;

    int **tab = (int **)malloc(n * sizeof(int *));
        for (i = 0; i < n;i++){
            tab[i] = (int *)malloc(m * sizeof(int));
        }

    int data [3][4] =
    {{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}};

    for (i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            tab[i][j] = data[i][j];
        }
    }

    int wynik = funkcja(n,m,tab);
    printf("Suma elementow podzielna przez 3: %d\n",wynik);
    for (i = 0; i < n;i++){
        free(tab[i]);
    }
    free(tab);
    return 0;
}
