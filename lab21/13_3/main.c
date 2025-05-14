#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    float width;
    float height;
    char * color;

};

int main()
{
    struct Rectangle tab[] = {
    {3.5,9.1, "Red"},
    {5.3,4.9, "Green"},
    {8.1,9.4, "Blue"},
    {2.9,1.3, "Yellow"}
    };
    return 0;
}
