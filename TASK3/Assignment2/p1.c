#include <stdio.h>

float add(float num1, float num2) {return num1 + num2;}
float subtract(float num1, float num2) { return num1 - num2;}
float multiply(float num1, float num2) {return num1 * num2;}
float divide(float num1, float num2) {return num1 / num2;}

int main() {
    float num1, num2;
    int choice;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    float result;
    switch (choice) {
        case 1:
            result = add(num1, num2);
            break;
        case 2:
            result = subtract(num1, num2);
            break;
        case 3:
            result = multiply(num1, num2);
            break;
        case 4:
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    printf("Result: %.2f\n", result);
    return 0;
}
/*if-else statements are used for runtime conditional execution, allowing different paths of code execution based on a condition at runtime. 
Conditional compilation directives, are used for compile-time conditional inclusion or exclusion of code, 
allowing different parts of the code to be compiled based on specified conditions before the program is run.*/