#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {
    FILE *file = fopen("example.txt", "r");
    char ch;
    int wordCount = 0, inWord = 0;

    if (file == NULL) {
        printf("Error opening file.\n");
        getch();
        return;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            if (!inWord) {
                inWord = 1;
                wordCount++;
            }
        } else {
            inWord = 0;
        }
    }

    fclose(file);
    printf("Number of words in the file: %d\n", wordCount);

    getch();
}
