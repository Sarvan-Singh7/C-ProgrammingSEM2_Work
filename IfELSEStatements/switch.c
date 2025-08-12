#include <stdio.h>
int main(){
    int day;
    printf("enter the day number : ");
    scanf("%d",& day);
    
    switch(day){
        case 1:
            printf("monday");
            break;
            
        case 2:
            printf("tuesday");
            break;
            
        case 3:
            printf("wednesday");
            break;
            
        case 4:
            printf("thursday");
            break;
            
        case 5:
            printf("friday");
            break;
            
        case 6:
            printf("Saturday");
            break;
            
            
        case 7:
            printf("Sunday");
            break;
            
            
        default:
            printf("there are only 7 days in a week numbered 1 to 7");
    }
    
    return 0;
    
}



