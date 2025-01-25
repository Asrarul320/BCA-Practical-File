#include <stdio.h>
#include <conio.h>

void main() {
    FILE *sourceFile, *destFile;
    char ch;

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        getch();
        return;
    }

    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Error opening destination file.\n");
        getch();
        fclose(sourceFile);
        return;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destFile);

    getch();
}
