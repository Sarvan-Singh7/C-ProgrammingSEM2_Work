#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    
    
    return 0;
}

// #include <stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);
//     for(int i=1;i<=N;i++){
//         for(int j=N;j>=i;j--){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;}