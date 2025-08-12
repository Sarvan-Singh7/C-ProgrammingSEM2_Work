#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    
    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%f %f", &x3, &y3);
    
    // Check collinearity using cross-product
    float crossProduct = (y2 - y1) * (x3 - x2) - (y3 - y2) * (x2 - x1);
    
    if (crossProduct == 0) {
        printf("The points lie on the same line.\n");
    } else {
        printf("The points do not lie on the same line.\n");
    }

    return 0;
}

