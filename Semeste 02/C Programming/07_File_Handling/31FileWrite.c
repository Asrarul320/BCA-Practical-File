#include <stdio.h>
#include <conio.h>

void main() {
    FILE *file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        getch();
        return;
    }

    fprintf(file, "Hello, this is a test file.\n");
    fclose(file);

    printf("Data written to file.\n");

    getch();
}
