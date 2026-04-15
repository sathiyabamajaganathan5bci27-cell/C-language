#include <stdio.h>

int main() {
    char name[50];
    
    printf("Hello! Welcome to my GitHub repository.\n");
    printf("What is your name? ");
    
    // Get user input
    scanf("%s", name);
    
    printf("Nice to meet you, %s! This is my first C program on GitHub.\n", name);
    
    return 0;
}
