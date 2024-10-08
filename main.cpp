#include <stdio.h>
int main1() {
    //printf("Hello World!");
    return 0;
}

int variables() {
    int age = 25;
    char ch = 'a';
    ch = '1';
}

int constants() {
    const double pi = 3.14;
    // PI is a symbolic constant so it cannot be changed
}

int literals() {
    //A literal is anything in ''
}

int datatypes() {
    int id; //Can declare multiple variables at once useing a comma ex: int id, age;
    float salary; //float variable
    double price; //double variable
    //both float and double hold numbers
    //the diffrence is float holds 4 bytes and a double holds 8 bytes
    char test = 'h'; //character variable
    //void datatypes returns to nothing and it cannot be used as a variable
    short a; //Holds 2 bytes
    long b; // holds 8 bytes
    long long c; //holds 8 bytes
    long double d; // holds 16 bytes
    unsigned int x = 35; //cannot hold negative values
    int y = 36; //can hold both positive and negative values
}

int inputoutput() {

    int testint = 5;
    float number1 = 13.5;
    double number2 = 12.4;
    char chr = 'a';
    int testInteger;
    float num1;
    double num2;
    char character;

    printf("Output example");//Regular output example
    printf("number1 = %f\n", number1);//float output example
    printf("number2 = %lf", number2);//double output example
    printf("testint = %d\n", testint);//Integer output example
    printf("character = %c", chr);  //character output example
    //integer in/out example
    printf("Enter an integer: ");
    scanf("%d", &testInteger);
    printf("Number = %d",testInteger);
    //float and double in/out example
    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf", num2);
    //character in/out example
    printf("Enter a character: ");
    scanf("%c",&character);
    printf("You entered %c.", character);

    //ASCII in/out example
    // When %d is used, ASCII value is displayed
    printf("ASCII value is %d.", character);

    //multible values in/out example
    int a;
    float b;

    printf("Enter integer and then a float: ");

    // Taking multiple inputs
    scanf("%d%f", &a, &b);

    printf("You entered %d and %f", a, b);
    return 0;
}