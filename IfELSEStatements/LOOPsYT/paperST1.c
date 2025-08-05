#include <stdio.h>

int main() {
    int a, b;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Ensure that a is less than or equal to b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Calculate the sum of odd numbers in the inclusive range
    int odd_sum = 0;
    for (int num = a; num <= b; num++) {
        if (num % 2 != 0) {
            odd_sum += num;
        }
    }

    // Displaying the result
    printf("The sum of odd numbers between %d and %d is: %d\n", a, b, odd_sum);

    return 0;
}





// Swapping numbers ensures that the range is correctly ordered, regardless of the input order. This simplifies the iteration logic in the loop, making it straightforward to calculate the sum within the specified range. Without swapping, the loop might not execute correctly, especially if the start number is greater than the end number.

// For example, if the user inputs 10 and 5, the program needs to iterate from 5 to 10. If we don't swap, the loop condition will not be met and won't execute properly. Swapping ensures that the range is always from the smaller to the larger number.

// In summary, swapping helps maintain a logical, inclusive range for calculations. It keeps the code clear and avoids potential errors due to incorrect range order. Does that make sense?


