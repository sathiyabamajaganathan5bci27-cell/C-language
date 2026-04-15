#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sen[100];

    /* 1. Take a character input */
    scanf("%c", &ch);
    
    /* 2. Take a string input (stops at first space) */
    scanf("%s", s);
    
    /* 3. Take a sentence input (stops at newline) 
       Note: The \n before %[^\n] consumes the leftover newline from the previous scanf */
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    
    /* Output the results */
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
