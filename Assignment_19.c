#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;
    int date_of_joining;
    double salary;
};

int main() {

    // Assignment 19
    // Create Structure EMPLOYEE for storing details (Name, Designation, gender, date of joining, salary)
    // Define function members to compute 
    // 1) total number of employees in an organization
    // 2) count of male and female employees
    // 3) employee with salary more than 10k
    // 4) employee with designation 'Assistant Manager'
    
    struct EMPLOYEE employees[100];
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Gender (M/F): ");
        scanf(" %c", &employees[i].gender);
        printf("Date of Joining (YYYYMMDD): ");
        scanf("%d", &employees[i].date_of_joining);
        printf("Salary: ");
        scanf("%lf", &employees[i].salary);
    }
    
    // 1) Total number of employees
    printf("\nTotal number of employees: %d\n", n);
    // 2) Count of male and female employees
    int male_count = 0, female_count = 0;
    for (int i = 0; i < n; i++) {
        if (employees[i].gender == 'M' || employees[i].gender == 'm') {
            male_count++;
        } else {
            female_count++;
        }
    }
    printf("Count of male employees: %d\n", male_count);
    printf("Count of female employees: %d\n", female_count);

    // 3) Employee with salary more than 10k
    printf("\nEmployees with salary more than 10k:\n");
    for (int i = 0; i < n; i++) {
        if (employees[i].salary > 10000) {
            printf("Name: %s, Salary: %.2lf\n", employees[i].name, employees[i].salary);
        }
    }

    // 4) Employee with designation 'Assistant Manager'
    printf("\nEmployees with designation 'Assistant Manager':\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(employees[i].designation, "Assistant Manager") == 0) {
            printf("Name: %s, Salary: %.2lf\n", employees[i].name, employees[i].salary);
        }
    }

    return 0;
}