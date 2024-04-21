#include <stdio.h>

struct student_info {
    int roll_number;
    char name[50];
    int age;
    char address[100];
    float marks;
};

void scan_studentinfo(struct student_info *student) {
    printf("Enter information for the student.\n");
    printf("Roll Number: ");
    scanf("%d", &student->roll_number);
    printf("Name: ");
    scanf("%s", student->name);
    printf("Age: ");
    scanf("%d", &student->age);
    printf("Address: ");
    scanf("%s", student->address);
    printf("Marks (out of 20): ");
    scanf("%f", &student->marks);
}

int print_studentinfo(struct student_info students[], int students_number) {
    int countlow_marks = 0;

    for (int i = 0; i < students_number; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Address: %s\n", students[i].address);
        printf("Marks: %.2f\n", students[i].marks);
        printf("-------------------------\n");

        if (students[i].marks < 12) {
            countlow_marks++;
        }
    }

    return countlow_marks;
}

int main() {
    int students_number = 15;
    struct student_info students[students_number];

    for (int i = 0; i < students_number; ++i) {
        scan_studentinfo(&students[i]);
    }

    int lowmarks_count = print_studentinfo(students, students_number);
    printf("Number of students with marks less than 12: %d\n", lowmarks_count);

    return 0;
}