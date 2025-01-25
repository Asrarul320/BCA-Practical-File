#include <stdio.h>
#include <conio.h>

void main() {
    int n, i, key, found = 0;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position: %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }

    getch();
}
