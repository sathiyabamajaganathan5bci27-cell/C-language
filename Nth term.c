#include <stdio.h>

// Recursive function to find the nth term
int find_nth_term(int n, int a, int b, int c) {
    // Base cases: if n is 1, 2, or 3, return the starting values
    if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;

    // Recursive step: sum of the three previous terms
    return find_nth_term(n - 1, a, b, c) + 
           find_nth_term(n - 2, a, b, c) + 
           find_nth_term(n - 3, a, b, c);
}

int main() {
    int n, a, b, c;
  
    // Input n and the first three terms
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    
    return 0;
}
