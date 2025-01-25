#include <stdio.h>
#include <conio.h>

void main() {
    FILE *file = fopen("example.txt", "r");
    char ch;

    if (file == NULL) {
        printf("Error opening file.\n");
        getch();
        return;
    }

    printf("Reading from file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    getch();
}
