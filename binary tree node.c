#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode *left, *right;
};

struct TreeNode* newNode(int data) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

int main() {
    struct TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    
    printf("Root: %d, Left: %d, Right: %d", root->data, root->left->data, root->right->data);
    return 0;
}
