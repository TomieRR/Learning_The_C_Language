#include <stdio.h>
#include <stdlib.h>
void shiftLeft(int n, float tab[]) {
    if (n <= 1) return;
    float pierwszy = tab[0];
    for (int i = 0; i < n-1; i++){
        tab[i] = tab[i+1];
    }
    tab[n-1] = pierwszy;
}
int main()
{
    float array[] = {1.2, 2.3, 3.4, 4.5, 5.6};
    int size = sizeof(array) / sizeof(array[0]);

    shiftLeft(size, array);
//ponizej czesc z pomoca naukowa LLM
    for (int i = 0; i < size; i++) {
        printf(", %.1f", array[i]);
    }
    return 0;
}
