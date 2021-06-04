#include <stdio.h>

// 3 kinds of I/O streams
/* 
stdin - standard input
stdout - standard output 
stderr - standard error
*/

/*
FORMAT SPECIFIERS

“%c for a char
%s for a string
%f for floating point numbers
%p for pointers”

*/
int main(void){

    char name[20];

    printf("Please enter your name \n");

    scanf("%s", name);

    printf("Your name is %s \n", name);
}