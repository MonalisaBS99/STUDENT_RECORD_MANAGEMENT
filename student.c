//student management system
#include <stdio.h>
#include <string.h>

struct Student
{
int usn;
char name[50];
float marks;
};

int main()
{
struct Student s[100];
int choice, count = 0, i, searchUSN;

while (1)
{
    printf("\n--- Student Record Management ---\n");
    printf("1. Add Student\n");
    printf("2. Display Students\n");
    printf("3. Search Student\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        if (count >= 100)
        {
            printf("Student record limit reached!\n");
            continue;
        }

        printf("Enter USN: ");
        scanf("%d", &s[count].usn);

        printf("Enter name: ");
        scanf(" %49[^\n]", s[count].name);

        printf("Enter marks: ");
        scanf("%f", &s[count].marks);

        count++;

        printf("Student added successfully!\n");
    }
    else if (choice == 2)
    {
        if (count == 0)
        {
            printf("No student records available.\n");
        }
        else
        {
            for (i = 0; i < count; i++)
            {
                printf("\nUSN: %d\n", s[i].usn);
                printf("Name: %s\n", s[i].name);
                printf("Marks: %.2f\n", s[i].marks);
            }
        }
    }
    else if (choice == 3)
    {
        printf("Enter USN to search: ");
        scanf("%d", &searchUSN);

        for (i = 0; i < count; i++)
        {
            if (s[i].usn == searchUSN)
            {
                printf("Student found!\n");
                printf("Name: %s\n", s[i].name);
                printf("Marks: %.2f\n", s[i].marks);
                break;
            }
        }

        if (i == count)
        {
            printf("Student not found.\n");
        }
    }
    else if (choice == 4)
    {
        printf("Exiting program...\n");
        break;
    }
    else
    {
        printf("Invalid choice!\n");
    }
}

return 0;

}
