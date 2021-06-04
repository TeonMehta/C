#include <stdio.h>

// “A structure is a collection of values of different types.”


struct person
{
    int age;
    char *name;
} tommy[10];

struct player {
    int age;
    char *name;
};

struct player James = {37, "Lebron"};


int main(void){
    printf("%s \n", James.name);
}


typedef struct {
    int age;
    char *name;
} HUMAN;

HUMAN george;

HUMAN george = {10, "George"};
