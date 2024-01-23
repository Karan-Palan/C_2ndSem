#include <stdio.h>

int main()
{
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
    