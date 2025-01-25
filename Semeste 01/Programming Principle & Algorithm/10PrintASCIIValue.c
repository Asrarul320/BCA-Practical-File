#include <stdio.h>
#include <conio.h>
void main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("ASCII value of '%c' = %d\n", ch, ch);
    getch();
}