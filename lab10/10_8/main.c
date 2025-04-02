#include <stdio.h>
#include <stdlib.h>
void sumToPtr(const int* ptr1, const int* ptr2, int* result){
*result = *ptr1 + *ptr2;
}
int main()
{
    const int a = 5;
    const int b = 10;
    int suma;
    sumToPtr(&a, &b, &suma);
    printf("Suma wynnosi: %d\n", suma);
    return 0;
}
