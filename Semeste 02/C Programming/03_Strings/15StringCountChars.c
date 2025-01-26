#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Number of characters in the string: %d\n", count);

    getch();
}
