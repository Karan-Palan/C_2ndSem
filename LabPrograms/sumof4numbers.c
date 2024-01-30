#include <stdio.h>
int is_four_digit(int num) {
    return num >= 1000 && num <= 9999;
}
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    if (!is_four_digit(num)) {
        printf("Invalid input! Please enter a four-digit number.\n");
        return 1;
    }
    int sum = sum_of_digits(num);
    printf("Sum of digits of %d: %d\n", num, sum);

    return 0;
}

