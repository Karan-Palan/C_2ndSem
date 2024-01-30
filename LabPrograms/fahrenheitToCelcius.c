#include <stdio.h>

double celsius_to_fahrenheit(double celsius) {
    return celsius * 9 / 5 + 32;
}
double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int choice;
    double temp, result;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temp);
        result = celsius_to_fahrenheit(temp);
        printf("%.2lf Celsius = %.2lf Fahrenheit\n", temp, result);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temp);
        result = fahrenheit_to_celsius(temp);
        printf("%.2lf Fahrenheit = %.2lf Celsius\n", temp, result);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}