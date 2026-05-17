#include <stdio.h>
int main(){
    int num;
    
    printf("Write the number: ");
    scanf("%d", &num);
    
    if(num == 0){
        printf("The number is 0");
    }
    else if(num > 0){
        printf("The number is positive");
    }
    else(num < 0);{
        printf("The number is negative");
    }

    return 0;
}