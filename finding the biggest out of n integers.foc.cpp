#include <stdio.h>

int main() {
    int n, num, max;
    
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    printf("Enter the first integer: ");
    scanf("%d", &max);
    
    for (int i = 1; i < n; i++) {
        printf("Enter integer %d: ", i+1);
        scanf("%d", &num);
        
        if (num > max) {
            max = num;
        }
    }
    
    printf("The largest number is %d.", max);
    
    return 0;
}
