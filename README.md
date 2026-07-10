# Scientific Calculator in C

A modular, menu-driven **Scientific Calculator** built in C. This project demonstrates the use of functions, header files, multiple source files, mathematical libraries, and user input handling.

## Features

### Basic Arithmetic

* Addition
* Subtraction
* Multiplication
* Division
* Modulus

### Scientific Functions

* Square Root
* Power (xʸ)
* Sine (Degrees)
* Cosine (Degrees)
* Tangent (Degrees)
* Logarithm (Base 10)
* Natural Logarithm (ln)
* Exponential (eˣ)
* Factorial
* Absolute Value

## Project Structure

```
ScientificCalculator/
│
├── main.c
├── calculator.c
├── calculator.h
├── math_utils.c
├── math_utils.h
└── README.md
```

## Technologies Used

* C Programming Language
* Standard C Library
* math.h Library
* GCC / MinGW / MSYS2

## How to Compile

Using GCC:

```bash
gcc main.c calculator.c math_utils.c -lm -o calculator
```

Run the program:

```bash
./calculator
```

On Windows:

```bash
calculator.exe
```

## Example

```
====================================
      SCIENTIFIC CALCULATOR
====================================

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Square Root
7. Power
8. Sine
9. Cosine
10. Tangent
11. Log Base 10
12. Natural Log
13. Exponential
14. Factorial
15. Absolute Value
0. Exit
```

## Concepts Practiced

* Modular Programming
* Header Files
* Function Prototypes
* Multiple Source Files
* User Input Handling
* Conditional Statements
* Loops
* Mathematical Functions
* Error Handling
* Clean Code Organization

## Future Improvements

* Expression Parser (`2 + 3 * sqrt(16)`)
* Calculation History
* Previous Answer (`Ans`)
* Degree/Radian Mode Toggle
* Binary, Octal, and Hexadecimal Conversions
* Matrix Operations
* Complex Number Calculations
* Statistical Functions
* Memory Functions (M+, M-, MR, MC)
* Colored Terminal Interface

## Learning Outcomes

This project strengthens understanding of:

* C programming fundamentals
* Multi-file project organization
* Using external libraries (`math.h`)
* Writing reusable functions
* Building interactive command-line applications

## License

This project is released under the MIT License. Feel free to use, modify, and distribute it for educational and personal purposes.

## Author

Developed as a learning project to practice C programming, modular software design, and scientific computing.
