#include <stdio.h>
#include <conio.h>

void main() {
    int n, i, sum = 0;
    int arr[100], *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("The sum of the elements is: %d\n", sum);

    getch();
}
