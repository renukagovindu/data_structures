#include <stdio.h>
float add(float a, float b) {
    return a + b;
}
float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    return a / b;
}
int main() {
    int choice;
    float num1, num2, result;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f%f", &num1, &num2);
    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("addition: %.2f\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("subtraction: %.2f\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("multiplication: %.2f\n", result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = divide(num1, num2);
                printf("division: %.2f\n", result);
            }
        default:
            printf("Invalid choice! Please try again.\n");
    }

    return 0;
}
