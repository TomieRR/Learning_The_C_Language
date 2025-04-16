#include <stdio.h>
#include <stdlib.h>

int length1(char txt[]) {
    int i = 0;
    while (txt[i] != '\0') {
        i++;
    }
    return i;
}

int length2(char *txt) {
    int i = 0;
    while (*(txt + i) != '\0') {
        i++;
    }
    return i;
}

int main() {
    char text[] = "Krakow";

    printf("%d\n", length1(text));
    printf("%d\n", length2(text));

    return 0;
}
