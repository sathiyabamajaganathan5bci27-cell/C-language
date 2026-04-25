#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p = (int*)malloc(2 * sizeof(int));
    if(p == NULL) return 1;
    p[0] = 100; p[1] = 200;
    printf("%d %d", p[0], p[1]);
    free(p);
    return 0;
}
