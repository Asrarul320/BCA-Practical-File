#include <stdio.h>
#include <conio.h>

void display(int *arr, int n) {
    int i;
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void main() {
    int arr[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    display(arr, n);

    getch();
}
