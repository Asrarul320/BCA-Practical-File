#include <stdio.h>
#include <conio.h>
void main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Lowercase: %c\n", ch + 32);
    else if (ch >= 'a' && ch <= 'z')
        printf("Uppercase: %c\n", ch - 32);
    else
        printf("Invalid input.\n");
    getch();
}