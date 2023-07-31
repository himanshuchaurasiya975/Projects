#include <stdio.h>

// Student structure
struct Student {
    int id;
    char name[100];
};

int main() {
    struct Student students[100]; //100 students can be stored
    int num_students; //Number of students data to be stored.
    int i, search_id;

    printf("Enter the number of students you want to store: ");
    scanf("%d", &num_students);

    // To add students
    for (i = 0; i < num_students; i++) {
        printf("\nEnter student ID: ");
        scanf("%d", &students[i].id);
        printf("Enter student name: ");
        scanf(" %[^\n]", students[i].name);
    }

    // Search for a student
    printf("\nEnter a student ID to search: ");
    scanf("%d", &search_id);
    for(i = 0; i < num_students; i++) {
        if(students[i].id == search_id) {
            printf("Student found: %s\n", students[i].name);
            break;
        }
    }

    if(i == num_students) {
        printf("Student not found.\n");
    }

    return 0;
}
