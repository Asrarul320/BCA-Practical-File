#include <stdio.h>

void calculateSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    calculateSum(n); // O(n) complexity
    return 0;
}
