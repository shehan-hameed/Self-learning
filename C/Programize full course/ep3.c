/*
int (4 bytes)|%d for printing
double (8 bytes)|%lf for printing
float (4 bytes)|%d for printing
int (4 bytes)|%d for printing

*/
#include <stdio.h>
int main(){

    int age;
    double number;
    
    printf("int size = %zu", sizeof(age));
    printf("\ndouble size = %zu", sizeof(number));
    
    return 0;
}