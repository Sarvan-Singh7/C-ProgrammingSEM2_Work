#include <stdio.h>
int main(){
    int number,number1,number2;
    printf("enter first number and second number  : ");
    scanf("%d %d",&number1,&number2);
    printf("enter operator :");
    scanf("%d",&number);
    
    switch(number){
        case 1:
        
            printf("addition %d",number1+number2);
            break;
            
        case 2:
            printf("subtraction %d",number1-number2);
            break;
            
        case 3:
            printf("multiplication %d",number1*number2);
            break;
            
        case 4:
            printf("division %d",number1/number2);
            break;
            
        
            
            
        default:
            printf("choose 1,2,3,4 only");
    }
    
    return 0;
    
}