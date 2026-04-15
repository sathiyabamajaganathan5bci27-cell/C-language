#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int*)malloc(n * sizeof(int));

    // Read the array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse logic: Swap elements using a temporary variable
    for(i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Print the reversed array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);
    
    return 0;
}
