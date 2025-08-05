// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int count;
//     int sum=0;
//     int ld;
    
//     for(count=0;n>0;count++){
//         ld=n%10;
//         sum=sum+ld;
//         n=n/10;
//     }
    
//     printf("sum is %d",sum);
//     return 0;
    
// } 

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count =0;
    int sum=0;
    int ld;
    while(n>0){
        ld=n%10;
        sum=sum+ld;
        n=n/10;  }
printf("%d",sum);
return 0;
}