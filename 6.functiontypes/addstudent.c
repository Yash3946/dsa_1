#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[40];
    int rollNo;
    int maths, science, english;
    int total;
    int maxMarks;
    int minMarks;
};

struct Student s[50]; 
int studentIndex = 0;

void addStudent() {
    printf("\nEnter student details (Name, Roll No, Marks for Maths, Science, English):\n");
    printf("Name: ");
    scanf("%s", s[studentIndex].name); 
    printf("Roll Number: ");
    scanf("%d", &s[studentIndex].rollNo); 
    printf("Marks in Maths: ");
    scanf("%d", &s[studentIndex].maths);  
    printf("Marks in Science: ");
    scanf("%d", &s[studentIndex].science); 
    printf("Marks in English: ");
    scanf("%d", &s[studentIndex].english); 

    s[studentIndex].total = s[studentIndex].maths + s[studentIndex].science + s[studentIndex].english;
    s[studentIndex].maxMarks = s[studentIndex].maths;
    if (s[studentIndex].science > s[studentIndex].maxMarks)
        s[studentIndex].maxMarks = s[studentIndex].science;
    if (s[studentIndex].english > s[studentIndex].maxMarks)
        s[studentIndex].maxMarks = s[studentIndex].english;

    s[studentIndex].minMarks = s[studentIndex].maths;
    if (s[studentIndex].science < s[studentIndex].minMarks)
        s[studentIndex].minMarks = s[studentIndex].science;
    if (s[studentIndex].english < s[studentIndex].minMarks)
        s[studentIndex].minMarks = s[studentIndex].english;

    studentIndex++;
}

void listStudents() {
    printf("\n%-10s %-10s %-6s %-8s %-8s %-5s %-5s %-5s\n", "Roll No", "Name", "Maths", "Science", "English", "Max", "Min", "Total");
    for (int i = 0; i < studentIndex; i++) {
        printf("%-10d %-10s %-6d %-8d %-8d %-5d %-5d %-5d\n",s[i].rollNo,s[i].name,
            s[i].maths,s[i].science,s[i].english,s[i].maxMarks,s[i].minMarks,s[i].total);       
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Add Student\n");
        printf("2. List Students\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addStudent();
            break;
        case 2:
            listStudents();
            break;
        case 0:
            printf("Exiting the program.\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}