#include <stdio.h>

//using define as preprocessor
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(){
    int area;    

    area = LENGTH * WIDTH;
    printf("the value of area: %d\n", area);
    printf("%c", NEWLINE);

    return 0;

}


