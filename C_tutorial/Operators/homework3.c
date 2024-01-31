#include <stdio.h>

int findSmallest(int num1, int num2, int num3, int callCounter) {
    callCounter++;
    if (callCounter >= 3) {
        return num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
    }
    return findSmallest(num1 < num2 ? num1 : num2, num3, callCounter, callCounter);
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Smallest number: %d\n", findSmallest(num1, num2, num3, 0));

    return 0;
}