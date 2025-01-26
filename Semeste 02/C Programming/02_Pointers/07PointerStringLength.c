#include <stdio.h>
#include <conio.h>

void main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    gets(str);

    ptr = str;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("The length of the string is: %d\n", length);

    getch();
}
