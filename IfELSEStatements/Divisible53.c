#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    if (n % 3 == 0 || n % 5 == 0)
    {
        printf("the number is divisible by 5 or 3");
    }
    else
    {
        printf("number is not divisible by 3 or 5");
    }

    return 0;
}