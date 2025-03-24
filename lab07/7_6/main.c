#include <stdio.h>
#include <stdlib.h>

int calculatePowerOfTwo(int n) {
    if(n < 0){
        return 0;
    }

    int result = 1;
    for (int i = 0; i < n; i++){
        result *= 2;
    }
    result;
}
int main()
{
    printf("2^5 = %d\n", calculatePowerOfTwo(5));
    return 0;
}
