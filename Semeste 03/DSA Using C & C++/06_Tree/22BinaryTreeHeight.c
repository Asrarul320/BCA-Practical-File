#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int heightOfTree(struct Node* root) {
    if (root == NULL) {
        return 0;
    }
    int leftHeight = heightOfTree(root->left);
    int rightHeight = heightOfTree(root->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Height of the Binary Tree: %d\n", heightOfTree(root));
    return 0;
}
