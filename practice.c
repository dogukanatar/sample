#include <stdio.h>


// variable declaration (only declaration)
extern int a, b;
extern int c;
extern float f;

int main(){

    // definition of declated variables at the top
    int a, b;
    int c;
    float f;

    // actual initialization in the main function
    a = 10;
    b = 20;

    c = a + b;
    printf("Value of c: %d\n", c);
    
    f = 70.0/3.0;
    printf("Value of f: %f\n", f);

    return 0;

}