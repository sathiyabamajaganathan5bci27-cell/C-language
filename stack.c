#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int val) {
    if (top == MAX - 1) printf("Stack Overflow\n");
    else stack[++top] = val;
}

int pop() {
    if (top == -1) return -1;
    return stack[top--];
}

int main() {
    push(5);
    push(10);
    printf("Popped: %d\n", pop()); // Returns 10
    return 0;
}
