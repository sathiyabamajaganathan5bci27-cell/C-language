#include <stdint.h>
// Use uintptr_t to perform bitwise XOR on memory addresses
typedef struct Node {
    int data;
    struct Node* ptr_diff; // XOR of prev and next pointer
} Node;

// To traverse, you XOR the current ptr_diff with the address of the previous node
