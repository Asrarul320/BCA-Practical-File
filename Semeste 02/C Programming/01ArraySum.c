#include <stdio.h>
#include <conio.h>

void main() {
    int n, i, sum = 0;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of the array elements is: %d\n", sum);
    getch();
}
