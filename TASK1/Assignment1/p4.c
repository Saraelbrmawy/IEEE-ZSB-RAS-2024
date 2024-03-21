#include <stdio.h>

void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int num1, num2, sum = 0; 
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    add(&num1, &num2, &sum);
    
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    
    
}