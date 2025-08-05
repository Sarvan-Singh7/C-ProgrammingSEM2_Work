#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int sub=0;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0)sub=sub-i;
        
        if(i%2!=0) sum=sum+i;
        
    }
    printf("%d",sum+sub);
    
    
    
    return 0;
}