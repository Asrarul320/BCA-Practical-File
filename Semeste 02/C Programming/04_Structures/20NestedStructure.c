#include <stdio.h>
#include <conio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    struct Date dob;
};

void main() {
    struct Employee emp;

    printf("Enter employee name: ");
    gets(emp.name);
    printf("Enter date of birth (day month year): ");
    scanf("%d %d %d", &emp.dob.day, &emp.dob.month, &emp.dob.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Date of Birth: %d-%d-%d\n", emp.dob.day, emp.dob.month, emp.dob.year);

    getch();
}
