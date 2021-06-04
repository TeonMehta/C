#include <stdio.h>

int main(void){

    const int SIZE = 10;
    int numbers[SIZE];

    int prices[5] = {1,2,3,4,5};

    numbers[0] = 10;

    for (int i = 0; i< 5; i++){
        prices[i] = i * 10;
    }

}