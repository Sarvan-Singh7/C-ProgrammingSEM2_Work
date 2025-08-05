#include <stdio.h>
int main(){
    int n,m;
    printf("Enter Number Of Rows ");
    scanf("%d",&n);
    printf("Enter Number Of Columns ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){    //outer loop for number of lines
        for(int i=1;i<=m;i++)    //inner loops for no of star in each line  
            printf("*");
    
         printf("\n");    //har line ke baad enter marne ke liye means line change ke liye after inner loop
    
    }

    
    return 0;
}