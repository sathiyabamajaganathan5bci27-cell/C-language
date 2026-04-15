#include <stdio.h>
#include <stdlib.h> // Required for the abs() function

void update(int *a, int *b) {
    int temp_a = *a; // Store original value of a
    
    // Update a to be the sum
    *a = temp_a + *b;
    
    // Update b to be the absolute difference
    // Using abs() ensures the result is always positive
    *b = abs(temp_a - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    // Input handling
    if (scanf("%d %d", &a, &b) == 2) {
        update(pa, pb);
        printf("%d\n%d", a, b);
    }

    return 0;
}
