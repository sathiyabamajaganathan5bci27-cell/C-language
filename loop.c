#include <stdio.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);

    // Loop through every number from a to b
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Array-style logic for numbers 1-9
            char* labels[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            printf("%s\n", labels[i-1]);
        } 
        else if (i > 9) {
            // Check if the number is even or odd
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}
