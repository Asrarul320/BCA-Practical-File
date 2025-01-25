#include <stdio.h>
#include <conio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

void main() {
    struct Employee emp;

    printf("Enter employee name: ");
    gets(emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);

    getch();
}
