#include <stdio.h>

// function declaration
void func(void);

// static variable declaration and definition
// global variable
static int count = 5;

// main function declaration
int main(){
    // while loop  
    while (count--)
    {
        func();
    }
    return 0;

}

void func(void){
    // staic local variable
    static int i = 5;
    i++;
    printf("i is %d and count is %d\n", i, count);
}
