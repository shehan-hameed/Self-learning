#include <stdio.h>
int main(){
    
    while (1){
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0 ){
            if (num % 2 == 1){
                printf("Negative odd number\n");
            }
            
            else {
                printf("Negative Even\n");
                continue;
            }
        }
        else if (num > 0){
            printf("Positive Value");
            break;
        }
        
        else{
            printf("%d is not valid\n", num);
        }
        
    }
    
    
    return 0;
}