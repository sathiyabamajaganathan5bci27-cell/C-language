#include <stdio.h>

int main() {
    int n, m;
    float x, y;

    // Read two integers
    scanf("%d %d", &n, &m);
    
    // Read two floats
    scanf("%f %f", &x, &y);

    // Output integer sum and difference
    printf("%d %d\n", n + m, n - m);

    // Output float sum and difference rounded to 1 decimal place
    printf("%.1f %.1f\n", x + y, x - y);

    return 0;
}
