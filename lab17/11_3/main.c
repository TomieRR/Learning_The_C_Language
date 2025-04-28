#include <stdio.h>
#include <stdlib.h>

int IsVowel(char c) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (vowels[i] == c) {
            return 1;
        }
    }
    return 0;
}

int countVow(char txt[]) {
    int counter = 0;
    for (int i = 0; txt[i] != '\0'; i++) {
        if (IsVowel(txt[i])) {
            counter++;
        }
    }
    return counter;
}

int main() {
    char text[] = "Hello world!";
    int vowelCount = countVow(text);
    printf("Number of vowels: %d\n", vowelCount);
    return 0;
}
