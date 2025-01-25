#include <stdio.h>
#include <conio.h>
void main() {
    int n, sum = 0, i;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    getch();
}