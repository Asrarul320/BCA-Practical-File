#include <stdio.h>
#include <stdlib.h>

struct BTreeNode {
    int values[3];
    int count;
    struct BTreeNode* child[4];
};

int searchInNode(int value, struct BTreeNode* node) {
    if (node == NULL) {
        return 0;
    }
    int i;
    for (i = 0; i < node->count; i++) {
        if (node->values[i] == value) {
            return 1;
        } else if (node->values[i] > value) {
            return searchInNode(value, node->child[i]);
        }
    }
    return searchInNode(value, node->child[node->count]);
}

int main() {
    struct BTreeNode* root = NULL; // Placeholder for B-Tree root creation

    // Add B-Tree creation and insertion logic here.

    int key = 20;
    if (searchInNode(key, root)) {
        printf("Key %d found in the B-Tree.\n", key);
    } else {
        printf("Key %d not found in the B-Tree.\n", key);
    }
    return 0;
}
