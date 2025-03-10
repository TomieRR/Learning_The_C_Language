#include <stdio.h>

int main() {
    int a = 10; // a = , b = , c =
    int b = 5;  // a = , b = , c =
    int c = 0;  // a = , b = , c =
    a = a + b;  // a = , b = , c =
    b = a - b;  // a = , b = , c =
    a = a - b;  // a = , b = , c =
    c = a;      // a = , b = , c =
    a = b * c;  // a = , b = , c =
    b = a / c;  // a = , b = , c =
    c = b << 2; // a = , b = , c =
    b = c >> 1; // a = , b = , c =
    a = b & c;  // a = , b = , c =
    c = a ^ b;  // a = , b = , c =
    b = ~c;     // a = , b = , c =
    return 0;
}
