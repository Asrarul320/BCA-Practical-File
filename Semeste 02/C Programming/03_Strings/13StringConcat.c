#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    getch();
}
