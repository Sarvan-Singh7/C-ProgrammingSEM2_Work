#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int ld=1;
    int power=1;
    int sum=0;
    int a=n;
    
    for(int i=1;n>0;i++){
        ld=n%10;
        power=ld*ld*ld;
        sum=sum+power;
        n=n/10;
        
    }
    printf("%d",sum);

    if(a!=sum){
        printf("not an armsrong number");
    }
    else 
        printf(" an armstrong number");
    
    return 0;
    
    
    
}




//OR   this second code works good because it can be applied to  any of the four digit 2 digit etc but upper wala not possible

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, result = 0, num_digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    
    // Calculate the number of digits
    while (original != 0) {
        original /= 10;
        num_digits++;
    }
    
    original = n;
    
    // Calculate the sum of powers of digits
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, num_digits);
        original /= 10;
    }
    
    // Check if the sum is equal to the original number
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    
    return 0;
}

