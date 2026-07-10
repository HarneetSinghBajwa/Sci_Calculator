#include <stdio.h>
#include <math.h>
#include "math_utils.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Square Root
void squareRoot()
{
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0)
    {
        printf("Error: Square root of a negative number is not defined.\n");
        return;
    }

    printf("Square Root = %.4lf\n", sqrt(num));
}

// Power
void power()
{
    double base, exponent;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    printf("Result = %.4lf\n", pow(base, exponent));
}

// Sine
void sine()
{
    double degree;
    double radian;

    printf("Enter angle (degrees): ");
    scanf("%lf", &degree);

    radian = degree * M_PI / 180.0;

    printf("sin(%.2lf°) = %.6lf\n", degree, sin(radian));
}

// Cosine
void cosine()
{
    double degree;
    double radian;

    printf("Enter angle (degrees): ");
    scanf("%lf", &degree);

    radian = degree * M_PI / 180.0;

    printf("cos(%.2lf°) = %.6lf\n", degree, cos(radian));
}

// Tangent
void tangent()
{
    double degree;
    double radian;

    printf("Enter angle (degrees): ");
    scanf("%lf", &degree);

    radian = degree * M_PI / 180.0;

    printf("tan(%.2lf°) = %.6lf\n", degree, tan(radian));
}

// Log Base 10
void logarithm()
{
    double num;

    printf("Enter a positive number: ");
    scanf("%lf", &num);

    if (num <= 0)
    {
        printf("Error: Logarithm is only defined for positive numbers.\n");
        return;
    }

    printf("log10(%.2lf) = %.6lf\n", num, log10(num));
}

// Natural Log
void naturalLog()
{
    double num;

    printf("Enter a positive number: ");
    scanf("%lf", &num);

    if (num <= 0)
    {
        printf("Error: Natural logarithm is only defined for positive numbers.\n");
        return;
    }

    printf("ln(%.2lf) = %.6lf\n", num, log(num));
}

// Exponential
void exponential()
{
    double x;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("e^(%.2lf) = %.6lf\n", x, exp(x));
}

// Factorial
void factorial()
{
    int n;
    unsigned long long fact = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error: Factorial is not defined for negative integers.\n");
        return;
    }

    if (n > 20)
    {
        printf("Warning: 20! is the largest factorial that fits in unsigned long long.\n");
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("%d! = %llu\n", n, fact);
}

// Absolute Value
void absoluteValue()
{
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("|%.2lf| = %.2lf\n", num, fabs(num));
}