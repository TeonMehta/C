#include <stdio.h>

// POINTER = ADDRESS OF A BLOCK OF MEMORY THAT CONTAINS A VARIABLE

int main(void){
    int age = 37;

    printf("%p \n", &age);

    int *address = &age;

    printf("%u \n", *address);


    // Array is a pointer to the first variable

    int prices[3] = {1,2,3};

    printf("%u", *prices);
    printf("%u", *(prices + 2));

}