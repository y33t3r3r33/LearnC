#include <stdio.h>
int main() {
    printf("Hello World!");
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