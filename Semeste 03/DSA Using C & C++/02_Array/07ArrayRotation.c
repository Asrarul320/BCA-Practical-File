#include <stdio.h>

void rotateArray(int arr[], int n, int d) {
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5}, d;
    printf("Enter positions to rotate: ");
    scanf("%d", &d);
    rotateArray(arr, 5, d);
    printf("Rotated Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
