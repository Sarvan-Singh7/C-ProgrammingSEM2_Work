#include <stdio.h>
int main(){
    for(int i=2;i<=100;i=i+2){
        
        printf("%d",i);
    }
    
    return 0;
}



#include<stdio.h>
int main(){
    int n ;
    printf("enter a number : ");
    scanf("%d",&n);
    
    
    for(int i=1;i<=n;i++){
        if(i%2==0)
        {continue;}
        printf("%d",i);

    }

    
    return 0;
}