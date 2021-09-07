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

#define MAX_ARRAY_SIZE 100

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
}
void inverse_trig() {
    char inverse_trig[MAX_ARRAY_SIZE];
    double value;
    double result;
    double angle;
    printf("Enter inverse trigonometric function\n");
    printf("Arcsin, Arccos, Arctan: ");
    scanf("%s", inverse_trig);
    printf("Enter value inside inverse function from between -1 and 1, e.g: entering 1 is arcsin(1): ");
    scanf("%lf", &value);
    if(value < -1 || value > 1) {
        while(value < -1 || value > 1) {
            printf("Invalid value, enter value from -1 to 1: ");
            scanf("%lf", &value);
        }
    }
    if(strcmp(inverse_trig, "Arcsin") == 0 || strcmp(inverse_trig, "arcsin") == 0) {
        result = asin(value);
        angle = 180/M_PI * result;
        printf("%lf", angle);
    }
    else if(strcmp(inverse_trig, "Arccos") == 0 || strcmp(inverse_trig, "arccos") == 0) {
        result = acos(value);
        angle = 180/M_PI * result;
        printf("%lf", angle);
    }
    else if(strcmp(inverse_trig, "Arctan") == 0 || strcmp(inverse_trig, "arctan") == 0) {
        result = atan(value);
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
void corefunction(void){
    char operator;
    double int1;
    double int2;
    int options;
    double angle;
    printf("--WeLcOme To CaLcUlAtOr BoT--\n");
    printf("Enter 1 for basic mathematical operations: \n");
    printf("Enter 2 for powers\n");
    printf("Enter 3 for trigonometric functions\n");
    printf("Enter 4 for inverse trigonometric functions\n");
    printf("Enter 5 for roots\n");
    printf("Enter 6 for factorials\n");
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
    else if(options == 4) {
        inverse_trig();
    }
    else if(options == 5) {
        root();
    }
    else if(options == 6) {
        factorials();
    }
    else{
        printf("Invalid operation choice");
    }
}
int main(void) {
    corefunction();
    return 0;
}