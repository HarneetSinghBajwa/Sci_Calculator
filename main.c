#include <stdio.h>
#include "calculator.h"
#include "math_utils.h"

int main()
{
    int choice;

    do
    {
        printf("\n====================================\n");
        printf("      SCIENTIFIC CALCULATOR\n");
        printf("====================================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Square Root\n");
        printf("7. Power\n");
        printf("8. Sine\n");
        printf("9. Cosine\n");
        printf("10. Tangent\n");
        printf("11. Log Base 10\n");
        printf("12. Natural Log\n");
        printf("13. Exponential (e^x)\n");
        printf("14. Factorial\n");
        printf("15. Absolute Value\n");
        printf("0. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        printf("\n");

        switch (choice)
        {
            case 1:
                add();
                break;

            case 2:
                subtract();
                break;

            case 3:
                multiply();
                break;

            case 4:
                divideNumbers();
                break;

            case 5:
                modulus();
                break;

            case 6:
                squareRoot();
                break;

            case 7:
                power();
                break;

            case 8:
                sine();
                break;

            case 9:
                cosine();
                break;

            case 10:
                tangent();
                break;

            case 11:
                logarithm();
                break;

            case 12:
                naturalLog();
                break;

            case 13:
                exponential();
                break;

            case 14:
                factorial();
                break;

            case 15:
                absoluteValue();
                break;

            case 0:
                printf("Thank you for using the Scientific Calculator!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}