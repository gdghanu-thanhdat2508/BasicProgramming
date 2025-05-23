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

        printf("\nNhap thong tin cho sinh vien %d:\n", i + 1);

        printf("  Ten          : ");
        fgets(students[i].name, MAX_NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';  // Xoa newline neu co

        printf("  Ma so        : ");
        scanf("%d", &students[i].roll_number);

        printf("  Tuoi         : ");
        scanf("%d", &students[i].age);

        printf("  Tong diem    : ");
        scanf("%lf", &students[i].total_marks);

        while (getchar() != '\n'); // Xoa ky tu thua trong buffer
    }

    // Print the Students information
    printf("\n========================================\n");
    printf("           Danh sach sinh vien          \n");
    printf("========================================\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nSinh vien %d:\n", i + 1);
        printf("  Ten          : %s\n", students[i].name);
        printf("  Ma so        : %d\n", students[i].roll_number);
        printf("  Tuoi         : %d\n", students[i].age);
        printf("  Tong diem    : %.2f\n", students[i].total_marks);
    }

    printf("========================================\n");

    // Free allocated memory
    for (int i = 0; i < n; i++)
    {
        free(students[i].name);
    }

    return 0;
}
