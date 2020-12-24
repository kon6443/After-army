#include <stdio.h>

void foo1(int);
void foo2(int);

int main(int argc, char *argv[]) {

    foo1(7);
    foo2(11);

	return 0;
}

void foo1(int xval) {
    int x;
    x = xval;
    
    printf("x: %d \n", x);
    printf("&x: %p \n", &x);
    
    return ;
}

void foo2(int dummy) {
    int y;
    
    printf("y: %d \n", y);
    printf("&y: %p \n", &y);
    
    return;
}
