#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int r;
    while(n>0){
        r=r*10;//ismein maine r=r*10 kiya not only r*10 means has to assign value
        
        r=r+(n%10);
        n=n/10;
        
    }
    printf("%d",r);
    return 0;
}


//or

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    
    printf("%d", sum);
    return 0;
}
//or
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (; n > 0; n /= 10) {
        sum=sum*10;
        sum += n % 10;
    }
    
    printf("%d", sum);
    return 0;
}
