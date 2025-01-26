#include <stdio.h>

void linearExample() {
    printf("Linear Data Structure: Array Example\n");
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void nonLinearExample() {
    printf("Non-linear Data Structure: Tree Example\n");
    printf("   1\n");
    printf("  / \\\n");
    printf(" 2   3\n");
}

int main() {
    linearExample();
    nonLinearExample();
    return 0;
}
