#include <stdio.h>
#include <stdlib.h>
int minIDxMax(int n, int tab[]){
    int minValue = tab[0];
    int maxIndex = 0;

    for (int i = 1; i< n; i++){
        if (tab[i] < minValue){
            minValue = tab[i];
            maxIndex = i;
        } else if (tab[i] == minValue) {
            if (i > maxIndex) {
                maxIndex = i;
            }
        }
    }
    return maxIndex;
}

int main()
{   int test1[] = {3,4,4,5,6,7,8};
    int size1 = sizeof(test1) / sizeof(test1[0]);
    printf("Index najmniejszego elementu: %d\n", minIDxMax(size1, test1));
    return 0;
}
