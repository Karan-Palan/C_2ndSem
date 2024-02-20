#include <stdio.h>
#include <math.h>

float squarearea(float side);
float rectanglearea(float a,float b);
float circlearea(float rad);

int main() {
    int choice;
    float a=5, b=10, radius;

   printf("Enter 1 for circle, 2 for rectangle, 3 for square: ");
   scanf("%d",&choice);

   switch(choice) {
       case 1:
           printf("Enter the radius of the circle: ");
           scanf("%f", &radius);
           printf("The area of the circle is: %f\n", circlearea(radius));
           break;
        case 2:
           printf("Enter the length of the rectangle: ");
           scanf("%f", &a);
           printf("Enter the width of the rectangle: ");
           scanf("%f", &b);
           printf("The area of the rectangle is: %f\n", rectanglearea(a,b));
           break;
        case 3:
           printf("Enter the side of the square: ");
           scanf("%f", &a);
           printf("The area of the square is: %f\n", squarearea(a));
           break;
       default:
           printf("Invalid choice.\n");
           break;
   }

    return 0;
}

float squarearea(float side) {
    return side * side;
}

float rectanglearea(float a,float b) {
    return  a * b;
}

float circlearea(float rad) {
    return 3.14 * rad * rad;
}