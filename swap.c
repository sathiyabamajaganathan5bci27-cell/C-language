#include <stdio.h>
void swap(int *x, int *y) {
    int t = *x; *x = *y; *y = t;
}
int main() {
    int a = 1, b = 2;
    swap(&a, &b);
    printf("a=%d b=%d", a, b);
    return 0;
}
