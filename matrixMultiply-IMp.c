#include <stdio.h>
int main(){
    int m,n,p,q;
    printf("Enter the number of rows and columns in first matrix : ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number of rows and columns in second matrix : ");
    scanf("%d %d",&p,&q);
    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p){
        printf("matrix multiplication not possible");
    }
    else{
        
        int res[m][q];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                
                for(int k=0;k<n;k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}