/*
  Expt.No.: 11.1
  Title   : WAP to maintain a simple employee database using file handing
  Name    : Mohammed Aaban Javid Kadri
  UIN     : 241P120
  Div     : D
 */

#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void addEmployee()
{
    FILE *file = fopen("employee_database.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %s", emp.name); // Read string with spaces
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // Write employee details to the file
    fprintf(file, "%d %s %.2f\n", emp.id, emp.name, emp.salary);
    printf("Employee record added successfully.\n");

    fclose(file);
}

void viewEmployees()
{
    FILE *file = fopen("employee_database.txt", "r");
    if (file == NULL)
    {
        printf("No employee records found.\n");
        return;
    }

    struct Employee emp;
    printf("\nEmployee Records:\n");
    printf("ID\tName\t\tSalary\n");
    printf("-------------------------------\n");

    // Read and display all records
    while (fscanf(file, "%d %49s %f", &emp.id, emp.name, &emp.salary) == 3)
    {
        printf("%d\t%-15s%.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(file);
}

int main()
{
    int choice;

    do
    {
        printf("\nEmployee Database Menu:\n");
        printf("1. Add Employee\n");
        printf("2. View All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEmployee();
            break;
        case 2:
            viewEmployees();
            break;
        case 3:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
/* OUTPUT
    Employee Database Menu:
    1. Add Employee
    2. View All Employees
    3. Exit
    Enter your choice: 1
    Enter Employee ID: 101
    Enter Employee Name: Aaban
    Enter Employee Salary: 20000
    Employee record added successfully.

    Employee Database Menu:
    1. Add Employee
    2. View All Employees
    3. Exit
    Enter your choice: 1
    Enter Employee ID: 102
    Enter Employee Name: Affan
    Enter Employee Salary: 30000
    Employee record added successfully.

    Employee Database Menu:
    1. Add Employee
    2. View All Employees
    3. Exit
    Enter your choice: 1
    Enter Employee ID: 103
    Enter Employee Name: Raees
    Enter Employee Salary: 40000
    Employee record added successfully.

    Employee Database Menu:
    1. Add Employee
    2. View All Employees
    3. Exit
    Enter your choice: 2

    Employee Records:
    ID      Name            Salary
    -------------------------------
    101     Aaban          20000.00
    102     Affan          30000.00
    103     Raees          40000.00

    Employee Database Menu:
    1. Add Employee
    2. View All Employees
    3. Exit
    Enter your choice: 3
    Exiting program.                   */
