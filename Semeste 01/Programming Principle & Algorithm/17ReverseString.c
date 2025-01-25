#include <stdio.h>
#include <conio.h>
#include <string.h>
void main() {
    char str[100], rev[100];
    int i, len;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string: %s\n", rev);
    getch();
}