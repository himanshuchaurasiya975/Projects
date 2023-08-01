#include <stdio.h>
#include<stdlib.h>

// Defining the structure
struct Student {
    int id;
    char name[100];
};

int main() {
    struct Student students[100]; 
    int num_students; // Number of students
    int i, search_id, remove_id, found = 0;

    printf("Enter the number of students you want to store: ");
    scanf("%d", &num_students);

    // To add a record
    for (i = 0; i < num_students; i++) {
        printf("\nEnter student ID: ");
        scanf("%d", &students[i].id);
        printf("Enter student name: ");
        scanf(" %[^\n]", students[i].name);
    }

    // To search a record
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

    // Remove a Record
    printf("\nEnter a student ID to remove: ");
    scanf("%d", &remove_id);
    for(i = 0; i < num_students; i++) {
        if(students[i].id == remove_id) {
            found = 1;
            break;
        }
    }
    
    if(found) {
        for(int j = i; j < num_students - 1; j++) {
            students[j] = students[j + 1];
        }
        num_students--; // Decrease the count of students
        printf("Student removed.\n");
    } else {
        printf("Student not found.\n");
    }

    return 0;
}
