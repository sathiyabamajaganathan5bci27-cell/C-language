#include <stdio.h>

int main() {
    int n, sum = 0;
    
    // Read the five-digit integer
    scanf("%d", &n);
    
    // Loop until the number becomes 0
    while (n > 0) {
        // 1. Get the last digit using modulo
        sum += (n % 10);
        
        // 2. Remove the last digit using integer division
        n = n / 10;
    }
    
    // Print the final sum
    printf("%d\n", sum);
    
    return 0;
}
