#include <stdio.h>
#include <conio.h>

void main() {
    FILE *file = fopen("example.txt", "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        getch();
        return;
    }

    fprintf(file, "Appending this text to the file.\n");
    fclose(file);

    printf("Data appended to file.\n");

    getch();
}
