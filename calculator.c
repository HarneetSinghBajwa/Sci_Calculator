#include <stdio.h>

void add()
{
    double a, b;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Result = %.2lf\n", a + b);
}

void subtract()
{
    double a, b;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Result = %.2lf\n", a - b);
}

void multiply()
{
    double a, b;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Result = %.2lf\n", a * b);
}

void divideNumbers()
{
    double a, b;

    printf("Enter dividend: ");
    scanf("%lf", &a);

    printf("Enter divisor: ");
    scanf("%lf", &b);

    if (b == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return;
    }

    printf("Result = %.2lf\n", a / b);
}

void modulus()
{
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    if (b == 0)
    {
        printf("Error: Modulus by zero is not allowed.\n");
        return;
    }

    printf("Result = %d\n", a % b);
}