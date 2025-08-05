//yeh triangle alag hai aur niche wala aag hai doni dekho
#include <stdio.h>
int main(){
    int n=6;
    // scanf("%d",&n);
    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//next different triangle having spaces between also 

#include <stdio.h>
int main(){
    int n=7;
    

    for(int i=1;i<=n;i++){
       for(int j=1;j<=n-i;j++){
        printf(" ");
       }
       for(int k=1;k<=i;k++){
        printf("* ");
       }
       printf("\n");
       }
    return 0;
}

