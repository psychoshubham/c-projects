#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    printf("========SIMPLE CALCULATOR=========\n\n");
    printf("[1] ADDITION\n");
    printf("[2] SUBTRACTION\n");
    printf("[3] MULTIPLICATION\n");
    printf("[4] DIVISION\n");

    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (choice) {
        case 1: {
            double sum = num1 + num2;
            printf("Sum of %.2lf and %.2lf is %.2lf\n", num1, num2, sum);
            break;
        }
        case 2: {
            double diff = num1 - num2;
            printf("Difference of %.2lf and %.2lf is %.2lf\n", num1, num2, diff);
            break;
        }
        case 3: {
            double mul = num1 * num2;
            printf("Product of %.2lf and %.2lf is %.2lf\n", num1, num2, mul);
            break;
        }
        case 4: {
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                double divv = num1 / num2;
                printf("Division of %.2lf and %.2lf is %.2lf\n", num1, num2, divv);
            }
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
