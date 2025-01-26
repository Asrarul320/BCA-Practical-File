#include <stdio.h>
#include <conio.h>

void main() {
    int n1, n2, i;
    int arr1[50], arr2[50], arr3[100];

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    printf("Enter elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    printf("Enter elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    for (i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    getch();
}
