#include <stdio.h>
int main(){
    int m;
    printf("enter a number : ");
    scanf("%d",&m);
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if((i==1 ||i==m)  || (j==1 || j==n))
                printf("*");
                
            else{//else ke bina code nahin chalega
                printf(" ");
            } 
            
        }printf("\n");
    }
    
    
    return 0;
}