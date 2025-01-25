#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main() {
    int n, i, *ptr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    printf("The sum of the elements is: %d\n", sum);
    free(ptr);

    getch();
}

