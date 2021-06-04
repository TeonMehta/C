#include <stdio.h>

int incrementAge();

int main(void){

    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
    
}
// STATIC VARIABLES
int incrementAge(){
    static int age = 0;
    //int age = 0;
    age++;
    return age;
}