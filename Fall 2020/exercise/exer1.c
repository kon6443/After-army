#include <stdio.h>

int main(int argc, char *argv[]) {
	
    char cc = 'a';
    int ii = 0;
    double dd = 0.0;
    char *pc; pc = &cc;
    int *pi; pi = &ii;
    double *pd; pd = &dd;
    
    printf("\n");
    printf("char &cc: %p \n", &cc);
    printf("int &ii: %p \n", &ii);
    printf("double &dd: %p \n", &dd);
    printf("char pc: %p \n", &pc);
    printf("int pi: %p \n", &pi);
    printf("double pd: %p \n", &pd);
    
    printf("==============================\n");
    
    printf("char cc: %c \n", cc);
    printf("int ii: %d \n", ii);
    printf("double dd: %f \n", dd);
    printf("char pc: %p \n", pc);
    printf("int pi: %p \n", pi);
    printf("double pd: %p \n", pd);
    
    printf("==============================\n");
    
    printf("size of char cc: %lu \n", sizeof(cc));
    printf("size of int ii: %lu \n", sizeof(ii));
    printf("size of double dd: %lu \n", sizeof(dd));
    printf("size of char *pc: %lu \n", sizeof(*pc));
    printf("size of int *pi: %lu \n", sizeof(*pi));
    printf("size of double *pd: %lu \n", sizeof(*pd));
    
    printf("size of char *pc: %lu \n", sizeof(*pc));
    printf("size of int *pi: %lu \n", sizeof(*pi));
    printf("size of double *pd: %lu \n", sizeof(*pd));
    
    
    printf("\n");
	return 0;
}
