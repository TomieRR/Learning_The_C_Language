#include <stdio.h>
#include <stdlib.h>

//moj kod
double find_max_pointed_numbers(const double *num1, const double *num2) {
    if (*num1 > *num2){
        return *num1;
    } else {
        return *num2;
    }
}
int main()
{
    double liczba1 = 4.60;
    double liczba2 = 3.15;

    double max = find_max_pointed_numbers(&liczba1, &liczba2);

    printf("Najwieksza liczba to %.2f\n", max);
    return 0;
}

//poprawiony kod z LLM, nie mam pojecia co sie zmienia i dlaczego moj nie dziala a poprawiony dziala
#include <stdio.h>
#include <stdlib.h>

double find_max_pointed_numbers(const double *num1, const double *num2) {
    if (*num1 > *num2) {
        return *num1;
    } else {
        return *num2;
    }
}

int main() {
    double liczba1 = 4.60;
    double liczba2 = 3.15;

    double max = find_max_pointed_numbers(&liczba1, &liczba2);

    printf("Najwiêksza liczba to %.2f\n", max);
    return 0;
}
