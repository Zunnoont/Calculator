#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#define MAX_ARRAY_SIZE 1000

void basic_operations(double int1, double int2){
    char operator;
    // make it so the user can simply enter any 
    // mathematical basic operation
    // such as 1 + 12
    printf("Enter operator: Addition: +, Subtraction: -, Division: /, Multiplication: *: ");
    
    scanf(" %c", &operator);
    if(operator == '+') {
        printf("Enter numbers to be added: ");
        scanf("%lf %lf", &int1, &int2);
        printf("%lf", int1+int2);
    }
    else if(operator == '-') {
        printf("Enter numbers to be subtracted: ");
        scanf("%lf %lf", &int1, &int2);
        printf("%lf", int1-int2);
    }
    else if(operator == '/') {
        printf("Enter numbers to be divided: ");
        scanf("%lf %lf", &int1, &int2);
        printf("%lf", int1/int2);
    }
    else if(operator == '*') {
        printf("Enter numbers to be multiplied: ");
        scanf("%lf %lf", &int1, &int2);
        printf("%lf", int1*int2); 
    }
}
void powers(double int1, double int2) {
    double result;
    char string[MAX_ARRAY_SIZE];
    char string1[MAX_ARRAY_SIZE] = "integer";
    char string2[MAX_ARRAY_SIZE] = "e";
    char string3[MAX_ARRAY_SIZE] = "Pi";
    printf("Enter base: Integer, e, Pi:\n");
    scanf("%s", &string);
    if(strcmp(string,string1) == 0){
        printf("Enter Numbers. E.g: entering 2 3 is 2^3: ");
        scanf("%lf %lf", &int1, &int2);
        result = pow(int1,int2);
        printf("%lf", result);
    }
    else if(strcmp(string,string2) == 0){
        printf("Enter power of base e (e^(integer): ");
        scanf("%lf", &int1);
        result = pow(M_E, int1);
        printf("%lf", result);
    }
    else if(strcmp(string,string3) == 0){
        printf("Enter power of base Pi (Pi^(Integer): ");
        scanf("%lf", &int1);
        result = pow(M_PI, int1);
        printf("%lf", result);
    }
    else{
        printf("Invalid base\n");
    }

}
void trigonometric() {
    char trigstring[MAX_ARRAY_SIZE];
    double angle;
    double radians;
    double result;
    printf("Enter trigonometric function\n");
    printf("Sin, Cos, Tan, arcsin, arccos, arctan : ");
    char trigstring1[MAX_ARRAY_SIZE] = "Sin";
    char trigstring2[MAX_ARRAY_SIZE] = "Cos";
    char trigstring3[MAX_ARRAY_SIZE] = "Tan";
    char trigstring4[MAX_ARRAY_SIZE] = "Arcsin"; 
    char trigstring5[MAX_ARRAY_SIZE] = "Arccos";
    char trigstring6[MAX_ARRAY_SIZE] = "Arctan";
    scanf("%s", &trigstring);
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);
    radians = 0.0174532925*angle;
    if(strcmp(trigstring, trigstring1) || strcmp(trigstring, "sin") == 0){
        result = sin(radians);
        printf("%lf", result);
    }
    else if(strcmp(trigstring, trigstring2) == 0 || strcmp(trigstring, "cos")){
        result = cos(radians);
        printf("%lf", result);

    }
    else if(strcmp(trigstring, trigstring3) == 0 || strcmp(trigstring, "tan")){
        result = tan(radians);
        printf("%lf", result);
    }
    else if(strcmp(trigstring, trigstring4) == 0 || strcmp(trigstring, "arctan")){
        result = asin(radians);
        printf("%lf", result);
        
    }
    else if(strcmp(trigstring, trigstring5) == 0 || strcmp(trigstring, "arcsin")){
        result = acos(radians);
        printf("%lf", result);

    }
    else if(strcmp(trigstring, trigstring6) == 0 || strcmp(trigstring, "arccos")){
        result = atan(radians);
        printf("%lf", result);
    }


}
int main(void) {

    char operator;
    double int1;
    double int2;
    int options;
    double angle;
    printf("--WeLcOme To CaLcUlAtOr BoT--\n");
    printf("Enter 1 for basic mathematical operations: \n");
    printf("Enter 2 for powers\n");
    printf("Enter 3 for trigonometric functions\n");
    scanf("%d", &options);
    if(options == 1){
        basic_operations(int1, int2);
    }
    else if(options== 2){
        powers(int1, int2);
    }
    else if(options == 3){
        trigonometric();
    }
    else{
        printf("Invalid operation choice");
    }
    
    

    
    return 0;

    
}