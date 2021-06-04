#include <stdio.h>

int main(void) {
    
    int i;

    // for loop
    for(int i = 0; i <= 10; i++){
        //printf("%u", i);
    }
    // for loop backwards

    for(int i = 10; i >= 0; i--){
        printf("%u", i);
    }
    i = 100;
    // WHILE LOOOP
    while(i < 10){

        i++;
    }

    // DO WHILE LOOP

    do {
        // something
    } while(i < 10);

    // BREAK OUT OF LOOPS
     
     for (int i = 0; i <= 10; i++){
         if (i == 5){
            break;
         }
     }


}