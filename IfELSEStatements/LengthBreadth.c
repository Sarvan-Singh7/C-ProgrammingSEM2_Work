#include <stdio.h>
int main(){

    int x,y;
    printf("enter length : ");
    scanf("%d",&x);
    printf("enter breadth : ");
    scanf("%d",&y);
    
    int area=x*y;
    int perimeter=2*(x+y);
    
    if(area>perimeter){
        printf("area of rectangle is greater than perimeter");
    }
    else{
        printf("area is not greater than perimeter");
    }
    
 
    

    return 0;
}