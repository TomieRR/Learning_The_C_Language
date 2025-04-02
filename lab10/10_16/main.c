#include <stdio.h>
#include <stdlib.h>
void swap(int* ptr1, int* ptr2){
int temp = *ptr1;
*ptr1 = *ptr2;
*ptr2 = temp;
}
int main()
{
    int a = 6;
    int b = 10;
    printf("Przed zamiana: a = %d, b = %d\n", a , b);
    swap(&a, &b);
    printf("po zmianie: a = %d, b = %d\n", a , b);
    return 0;
}
