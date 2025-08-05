#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    int a=1;
    for(int i=1;i<=2*n-1;i++){
        printf("%d",a);
        a++;
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int b=1;
        for(int j=1;j<nst;j++){
          printf("%d",b);
          b++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            b++;
        }
        for(int l=1;l<nst;l++){
          printf("%d",b);
          b++;
        }
        
        nst--;
        nsp=nsp+2;
        printf("\n");
    }
   
    return 0;
}