//sbse upar hai numbers wala and niche wala code bhi dekho alphabet wala
#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        int a=i-1;
        for(int l=1;l<=i-1;l++){
            printf("%d",a);
            a--;
        }
        
        printf("\n");
        
    }
    
    return 0;
}




//next code alphabet wala




#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int a=64;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            a++;
            printf("%c",a);
            
        }
        int b=a-1;
        for(int l=1;l<=i-1;l++){
            printf("%c",b);
            b--;
        }
        
        printf("\n");
    }
    return 0;
}