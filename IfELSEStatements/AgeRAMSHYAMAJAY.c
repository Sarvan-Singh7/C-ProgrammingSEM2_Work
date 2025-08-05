#include <stdio.h>
int main(){
    int x,y,z;
    printf("enter the age of RAM : ");
    scanf("%d",&x);
    printf("entewr the age of SHYAM : ");
    scanf("%d",&y);
    printf("enter the age of AJAY : ");
    scanf("%d",&z);
    
    
    if(x>y && x>z){
        printf("RAM is older than SHYAM and AJAY ");
    }
    
    
    else if(y>x && y>z){
        printf("SHYAM is older than RAM and AJAY");
    }
    
    else if(z>x && z>y ){
        printf("AJAY is older than RAM and SHYAM ");
    }
    
    return 0;
}
