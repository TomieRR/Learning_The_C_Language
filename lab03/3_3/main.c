#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wprowadz liczbe w skali od 1 do 5: \n");
    scanf("%d",&a);
    if (a ==1 ){
        printf("Podana ocena to: Niedostateczny.\n");
    } else if (a ==2){
        printf("Podana ocena to: Dopuszczajacy.");
    } else if (a ==3){
        printf("Podana ocena to: Dostateczny.");
    } else if (a ==4){
        printf("Podana ocena to: Dobry.");
    } else if (a ==5){
        printf("Podana ocena to: Bardzo dobry.");
    } else{
        printf("Podana liczba nie nalezy do zbioru liczb od 1 do 5.");
    }
    return 0;
}
