#include <stdio.h>
#include <conio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

void main() {
    struct Student student1;

    printf("Enter student name: ");
    gets(student1.name);
    printf("Enter roll number: ");
    scanf("%d", &student1.rollNo);
    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNo);
    printf("Marks: %.2f\n", student1.marks);

    getch();
}
