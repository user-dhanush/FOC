#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("%d is the larger number.", num1);
    } else if (num2 > num1) {
        printf("%d is the larger number.", num2);
    } else {
        printf("Both numbers are equal.");
    }
    
    return 0;
}
