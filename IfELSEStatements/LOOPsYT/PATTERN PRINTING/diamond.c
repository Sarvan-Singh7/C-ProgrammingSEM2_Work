    //only for odd number valid  
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    int ml=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
        nsp++;
        nst-=2;
            
        }
        printf("\n");
    }
    
    return 0;
}


//////////for even and odd but more preference given to odd one////////////// 




// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a positive number: ");
//     scanf("%d", &n);

//     int ml = (n + 1) / 2; // Midpoint line
//     for (int i = 1; i <= n; i++) {
//         int nst, nsp;

//         if (i <= ml) {
//             nst = 2 * i - 1;
//             nsp = ml - i;
//         } else {
//             nst = 2 * (n - i) + 1;
//             nsp = i - ml;
//         }

//         // Print spaces
//         for (int j = 1; j <= nsp; j++) {
//             printf(" ");
//         }

//         // Print stars
//         for (int k = 1; k <= nst; k++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }