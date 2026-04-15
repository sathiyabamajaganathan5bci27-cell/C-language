#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    
    // Read input string
    scanf("%s", s);

    // Array to store counts for digits 0-9, initialized to zero
    int count[10] = {0};

    // Iterate through the string
    for (int i = 0; i < strlen(s); i++) {
        // Check if the character is a digit
        if (s[i] >= '0' && s[i] <= '9') {
            // Subtract '0' to convert char to its integer index (e.g., '5' - '0' = 5)
            count[s[i] - '0']++;
        }
    }

    // Print the frequencies separated by spaces
    for (int i = 0; i < 10; i++) {
        printf("%d ", count[i]);
    }

    free(s);
    return 0;
}
