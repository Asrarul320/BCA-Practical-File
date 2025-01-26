#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define MIN 2

struct BTreeNode {
    int values[MAX + 1];
    int count;
    struct BTreeNode* child[MAX + 1];
};

struct BTreeNode* root = NULL;

struct BTreeNode* createNode(int value, struct BTreeNode* child) {
    struct BTreeNode* newNode = (struct BTreeNode*)malloc(sizeof(struct BTreeNode));
    newNode->values[1] = value;
    newNode->count = 1;
    newNode->child[0] = root;
    newNode->child[1] = child;
    return newNode;
}

void insertValue(int value, int position, struct BTreeNode* node, struct BTreeNode* child) {
    int i;
    for (i = node->count; i > position; i--) {
        node->values[i + 1] = node->values[i];
        node->child[i + 1] = node->child[i];
    }
    node->values[position + 1] = value;
    node->child[position + 1] = child;
    node->count++;
}

void splitNode(int value, int* pValue, int position, struct BTreeNode* node, struct BTreeNode* child, struct BTreeNode** newNode) {
    int median, i;

    if (position > MIN) {
        median = MIN + 1;
    } else {
        median = MIN;
    }

    *newNode = (struct BTreeNode*)malloc(sizeof(struct BTreeNode));
    for (i = median + 1; i <= MAX; i++) {
        (*newNode)->values[i - median] = node->values[i];
        (*newNode)->child[i - median] = node->child[i];
    }
    node->count = median;
    (*newNode)->count = MAX - median;

    if (position <= MIN) {
        insertValue(value, position, node, child);
    } else {
        insertValue(value, position - median, *newNode, child);
    }

    *pValue = node->values[node->count];
    (*newNode)->child[0] = node->child[node->count];
    node->count--;
}

int setNodeValue(int value, int* pValue, struct BTreeNode* node, struct BTreeNode** child) {
    int position;

    if (!node) {
        *pValue = value;
        *child = NULL;
        return 1;
    }

    if (value < node->values[1]) {
        position = 0;
    } else {
        for (position = node->count; (value < node->values[position] && position > 1); position--);
        if (value == node->values[position]) {
            printf("Duplicate value not allowed.\n");
            return 0;
        }
    }

    if (setNodeValue(value, pValue, node->child[position], child)) {
        if (node->count < MAX) {
            insertValue(*pValue, position, node, *child);
        } else {
            splitNode(*pValue, pValue, position, node, *child, child);
            return 1;
        }
    }
    return 0;
}

void insert(int value) {
    int flag, i;
    struct BTreeNode* child;

    flag = setNodeValue(value, &i, root, &child);
    if (flag) {
        root = createNode(i, child);
    }
}

void printTree(struct BTreeNode* node, int level) {
    if (node) {
        int i;
        for (i = node->count; i >= 1; i--) {
            printTree(node->child[i], level + 1);
            printf("%*s%d\n", level * 5, "", node->values[i]);
        }
        printTree(node->child[0], level + 1);
    }
}

int main() {
    insert(10);
    insert(20);
    insert(5);
    insert(6);
    insert(12);
    insert(30);

    printf("B-Tree:\n");
    printTree(root, 0);
    return 0;
}
