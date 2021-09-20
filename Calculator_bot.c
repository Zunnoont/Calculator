// Calculator Bot
// Calculator_bot.c
// 
// This program was written by Zunnoon Tahir
// This program acts as a virtual calculator
// Providing various mathematical 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "calculator_bot.h"



void basic_operations(double int1, double int2) {
    char operator;
    printf("Enter operator: Addition: +, Subtraction: -, Division: /, Multiplication: *: ");
    scanf(" %c", &operator);
    if(operator == '+') {
        printf("Enter numbers to be added: ");
        scanf("%lf %lf", &int1, &int2);
        printf("%lf", int1 + int2);
    }
    else if(operator == '-') {
        printf("Enter numbers to be subtracted: ");
        scanf("%lf %lf", &int1, &int2);
        printf("%lf", int1 - int2);
    }
    else if(operator == '/') {
        printf("Enter numbers to be divided: ");
        scanf("%lf %lf", &int1, &int2);
        printf("%lf", int1 / int2);
    }
    else if(operator == '*') {
        printf("Enter numbers to be multiplied: ");
        scanf("%lf %lf", &int1, &int2);
        printf("%lf", int1 * int2); 
    }
}
void powers(double int1, double int2) {
    double result;
    char string[MAX_ARRAY_SIZE];
    char string1[MAX_ARRAY_SIZE] = "integer";
    char string2[MAX_ARRAY_SIZE] = "e";
    char string3[MAX_ARRAY_SIZE] = "Pi";
    printf("Enter base: Integer, e, Pi:\n");
    scanf("%s", string);
    if(strcmp(string, string1) == 0) {
        printf("Enter Numbers. E.g: entering 2 3 is 2^3: ");
        scanf("%lf %lf", &int1, &int2);
        result = pow(int1,int2);
        printf("%lf", result);
    }
    else if(strcmp(string, string2) == 0) {
        printf("Enter power of base e (e^(integer): ");
        scanf("%lf", &int1);
        result = pow(M_E, int1);
        printf("%lf", result);
    }
    else if(strcmp(string, string3) == 0) {
        printf("Enter power of base Pi (Pi^(Integer): ");
        scanf("%lf", &int1);
        result = pow(M_PI, int1);
        printf("%lf", result);
    }
    else {
        printf("Invalid base\n");
    }
}
void root() {
    double degree;
    double root;
    double base;
    double result;
    printf("Enter degree of root (Entering 2 is equivelant to a square root): ");
    scanf("%lf", &degree);
    root = 1 / degree;
    printf("Enter number inside root: ");
    scanf("%lf", &base);
    if(base >= 0) {
        result = pow(base, root);
        printf("%lf", result);
    }
    else {
        printf("Number inside root must be positive or zero");
    }
}
void trigonometric() {
    char trigstring[MAX_ARRAY_SIZE];
    double angle;
    double radians;
    double result;
    printf("Enter trigonometric function\n");
    printf("Sin, Cos, Tan, arcsin, arccos, arctan : ");
    scanf("%s", trigstring);
    printf("Enter angle: ");
    scanf("%lf", &angle);
    radians = 0.0174532925 * angle;
    if(strcmp(trigstring, "Sin") == 0 || strcmp(trigstring, "sin") == 0) {
        result = sin(radians);
        printf("%lf", result);
    }
    else if(strcmp(trigstring, "Cos") == 0 || strcmp(trigstring, "cos") == 0) {
        result = cos(radians);
        printf("%lf", result);
    }
    else if(strcmp(trigstring, "Tan") == 0 || strcmp(trigstring, "tan") == 0) {
        result = tan(radians);
        printf("%lf", result);
    }
    else if(strcmp(trigstring, "Arcsin") == 0 || strcmp(trigstring, "arcsin") == 0) {
        result = asin(angle);
        angle = 180/M_PI * result;
        printf("%lf", angle);
    }
    else if(strcmp(trigstring, "Arccos") == 0 || strcmp(trigstring, "arccos") == 0) {
        result = acos(angle);
        angle = 180/M_PI * result;
        printf("%lf", angle);
        
    }
    else if(strcmp(trigstring, "Arctan") == 0 || strcmp(trigstring, "arctan") == 0) {
        result = atan(angle);
        angle = 180/M_PI * result;
        printf("%lf", angle);
    }
}
void factorials() {
    int number;
    int increment;
    int factorial = 1;
    printf("Enter factorial: ");
    scanf("%d", &number);
    if(number < 0) {
        number = number * -1;
        for(increment = 1; increment <= number; increment++) {
            factorial = factorial * increment;
        }
        factorial = factorial * -1;
        printf("%d", factorial);
    }
    else {
        for(increment = 1; increment <= number; increment++) {
            factorial = factorial * increment;
        } 
        printf("%d", factorial);
    }
}
int fibonacci(int sequence) {
    if(sequence == 0) {
        return 0;
    }
    else if(sequence == 1) {
        return 1;
    }
    else {
        return fibonacci(sequence-1) + fibonacci(sequence-2);
    }
}
void corefunction(void) {
    char operator;
    double int1;
    double int2;
    int options;
    double angle;
    printf("\e[1;32m--WeLcOme To CaLcUlAtOr BoT--\n\e[0m");
    printf("\n");
    printf("Enter 1 for basic mathematical operations: \n");
    printf("\n");
    printf("Enter 2 for powers\n");
    printf("\n");
    printf("Enter 3 for trigonometric functions\n");
    printf("\n");
    printf("Enter 5 for roots\n");
    printf("\n");
    printf("Enter 6 for factorials\n");
    printf("\n");
    printf("Enter 7 for fibonacci sequences:\n");
    printf("Input: ");
    scanf("%d", &options);
    if(options == 1) {
        basic_operations(int1, int2);
        
    }
    else if(options == 2) {
        powers(int1, int2);
    }
    else if(options == 3) {
        trigonometric();
    }
    else if(options == 5) {
        root();
    }
    else if(options == 6) {
        factorials();
    }
    else if(options == 7) {
        int fibsequence;
        printf("Enter fibonacci sequence to be calculated: ");
        scanf("%d", &fibsequence);
        printf("%d\n", fibonacci(fibsequence));
    }
    else{
        printf("Invalid operation choice");
    }
}
int main(void) {
    corefunction();
    return 0;
}