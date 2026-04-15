#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    
    // Read the entire sentence including spaces
    scanf("%[^\n]", s);
    
    // Resize memory to fit the actual string length
    s = realloc(s, strlen(s) + 1);

    // Loop through the string character by character
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            printf("\n"); // Print newline if a space is found
        } else {
            printf("%c", s[i]); // Print the character
        }
    }
    
    printf("\n"); // Final newline at the end of the sentence
    free(s);
    return 0;
}
