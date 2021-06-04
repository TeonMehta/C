#include <stdio.h>

int main (void){

    char i; // small intergers -128 - 127
    int j; // ranges from -2,147,483,648 to 2,147,483,647
    short k;
    long l;
    float f; // 32 bits
    double d; // bigger thsn float;



    int age;  // VARIABLE DECLARATION
    age = 100;

    const int NAME = 10; // CONSTANT VAIRABLE

    #define NUMBER 10

    printf("%c", NUMBER);

    





    printf("char size: %lu bytes\n", sizeof(char));
    printf("int size: %lu bytes\n", sizeof(int));
    printf("float size: %lu bytes\n", sizeof(float));
    printf("long size: %lu bytes\n", sizeof(long));

    printf("double size %lu bytes\n", sizeof(double));
    printf("long double size %lu bytes\n", sizeof(long double));


    return 0;
}