#include <stdio.h>
#include <stdlib.h>
int funkcja(int a, int b){
int jednosc_a = a % 10;
int jednosc_b = b % 10;
if(jednosc_a % 2 == 0 && jednosc_b % 2 == 0 ){
    return 1;
}else {
    return 0;
    }
}
int main()
{

    int testowa_liczba_1 = 18;
    int testowa_liczba_2 = 20;
    int wynik = funkcja(testowa_liczba_1, testowa_liczba_2);
    printf("Wynikiem tej funkcji dla %d i %d jest: %d\n", testowa_liczba_1, testowa_liczba_2, wynik);
    return 0;
}
