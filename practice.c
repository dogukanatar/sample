#include <stdio.h>
int main(){

    // Let's try const this time
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = 'n';
    int area;

    area = LENGTH * WIDTH;
    printf("the value of area: %d\n", area);
    printf("%c", NEWLINE);

    return 0;

}


