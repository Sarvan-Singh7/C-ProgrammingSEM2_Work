#include <stdio.h>
int main(){
    int a,b;
    printf("No of students , No of subjects :"  );
    scanf("%d %d",&a,&b);
    int arr[a][b];
    
    for(int i=0;i<a;i++){
        printf("no and marks of a studentin SUBJECTS : ");
        for(int j=0;j<b;j++){
            
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}