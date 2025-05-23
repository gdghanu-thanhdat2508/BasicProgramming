#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define max name length
#define MAX_NAME_LENGTH 100

// Create the student structure
struct Student
{
    char *name;
    int roll_number;
    int age;
    double total_marks;
};

int main()
{
    struct Student students[5];
    int n = sizeof(students) / sizeof(struct Student);

    // Input the student data
    for (int i = 0; i < n; i++)
    {
        students[i].name = (char *)malloc(MAX_NAME_LENGTH * sizeof(char));
        if (students[i].name == NULL)
        {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter information for student %d:\n", i + 1);

    }

    // Print the Students information
    printf("========================================\n");
    printf("           Student Records              \n");
    printf("========================================\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("  Name        : %s\n", students[i].name);
        printf("  Roll Number : %d\n", students[i].roll_number);
        printf("  Age         : %d\n", students[i].age);
        printf("  Total Marks : %.2f\n", students[i].total_marks);
    }

    printf("========================================\n");

    // Free allocated memory
    for (int i = 0; i < n; i++)
    {
        free(students[i].name);
    }

    return 0;
}
