#include <stdio.h>

int main() {
    int arr[3][3], key, found = 0;
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < 3 && !found; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == key) {
                printf("Element found at position [%d][%d]\n", i, j);
                found = 1;
                break;
            }
        }
    }
    if (!found) printf("Element not found.\n");
    return 0;
}
