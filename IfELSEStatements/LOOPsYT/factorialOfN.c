#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int prod=1;
    for(int i=1;i<=n;i++){
        
        prod=prod*i;
        printf("the factorial of %d is %d\n ",i,prod);
        
        
        
    }
    // printf("%d",prod);
    
    return 0;
}