#include <stdio.h>
#include <stdlib.h>

void staticArray() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Static Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void dynamicArray() {
    int *arr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    printf("Dynamic Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    printf("\n");
}

int main() {
    staticArray();
    dynamicArray();
    return 0;
}
