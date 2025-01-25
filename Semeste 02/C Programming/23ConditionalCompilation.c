#include <stdio.h>
#include <conio.h>

#define DEBUG

void main() {
    printf("Program Start\n");

#ifdef DEBUG
    printf("Debugging Mode Enabled\n");
#endif

    printf("Program End\n");

    getch();
}
