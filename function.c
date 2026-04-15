#include <stdio.h>

/* 
 * Function to find the greatest of four integers.
 * It compares each value and updates 'max' if a larger one is found.
 */
int max_of_four(int a, int b, int c, int d) {
    int max = a;

    if (b > max) max = b;
    if (c > max) max = d; // Fixed: should be c
    if (d > max) max = d;

    return max;
}

int main() {
    int a, b, c, d;
    
    // Reading four integers from separate lines
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
