#include <stdio.h>

int main(){
    
    int x,y;
    printf("enter  x coordinate and y coordinate separated by blank : ");
    scanf("%d %d",&x,&y);
    
    
    if(x==0 && y!=0)
        printf("y coordinate");
        
    else if(x!=0 && y==0)  
        printf("x coordinate");
        
        
    else if(x!=0 && y!=0)    
        printf("has both coordinate : x and y");
        
        
    else
        printf("lies on origin  ");
    
    

    
    
    return 0;
}