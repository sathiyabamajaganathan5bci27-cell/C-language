#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // The size of the grid is always (2*n - 1)
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find the minimum distance to any of the 4 edges
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            // The value to print is n minus the minimum distance
            int min = top;
            if (left < min) min = left;
            if (bottom < min) min = bottom;
            if (right < min) min = right;

            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}
