// #include <stdio.h>
// int main(){
//     int a=100;
//     for(int i=1;a>0;i++){
//         printf("%d\n",a);
//         a=a-3;
//     }

//     return 0;
// }



#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a=100;
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a/2;
    }

    return 0;
}



#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a=3;
    for(int i=1;i<n;i++){
        
        printf("%d\n",a);
        a=a*4;
        
    }
    
    return 0;
}