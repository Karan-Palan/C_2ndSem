#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char c;
    printf("Enter a char : ");
    scanf(" %c", &c);
    printf("%c is %sa digit.\n", c, isdigit(c) ? "" : "not ");

    return 0;
}