#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Lexicographical non-decreasing (Standard A-Z)
int lexicographical_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

// 2. Lexicographical non-increasing (Z-A)
int lexicographical_sort_negative(const char* a, const char* b) {
    return strcmp(b, a);
}

// Helper function to count distinct characters
int count_distinct(const char* s) {
    int count = 0;
    int hash[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (hash[s[i] - 'a'] == 0) {
            hash[s[i] - 'a'] = 1;
            count++;
        }
    }
    return count;
}

// 3. Sort by number of distinct characters
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int res = count_distinct(a) - count_distinct(b);
    return (res == 0) ? strcmp(a, b) : res;
}

// 4. Sort by length
int sort_by_length(const char* a, const char* b) {
    int res = strlen(a) - strlen(b);
    return (res == 0) ? strcmp(a, b) : res;
}

// Generic Bubble Sort using a Function Pointer
void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b)) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (cmp_func(arr[j], arr[j + 1]) > 0) {
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
  
    char** arr = (char**)malloc(n * sizeof(char*));
    for(int i = 0; i < n; i++){
        arr[i] = malloc(1024 * sizeof(char));
        scanf("%s", arr[i]);
        arr[i] = realloc(arr[i], strlen(arr[i]) + 1);
    }

    string_sort(arr, n, lexicographical_sort);
    for(int i = 0; i < n; i++) printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographical_sort_negative);
    for(int i = 0; i < n; i++) printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++) printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++) printf("%s\n", arr[i]);
    printf("\n");

    return 0;
}
