#include <stdio.h>
#include <stdlib.h>
int sumSquares(int n, int tab[]){
    int sum = 0;
    for (int i =0; i < n; i++){
        sum += tab[i] * tab[i];
    }
    return sum;
}
int main()
{
    int array1[] = {1,2,3,4};
    int size1 = sizeof(array) / sizeof(array[0]);
    int result1 = sumSquares(size1, array1);

    printf("Hello world!\n");
    return 0;
}
