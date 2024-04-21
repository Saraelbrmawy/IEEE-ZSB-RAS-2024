

 
#include <stdio.h>

typedef struct {
    int id;
    char fullName[50];
    int yearsOld;
    char residence[100];
    float grade;
} Student;

int main() {

    Student studentList[15];

    studentList[0] = (Student){10, "aya", 17, "zagazig", 90.0};
    studentList[1] = (Student){12, "heba", 24, "zagazig", 70.0};
    studentList[2] = (Student){11, "mona", 20, "zagazig", 85.0};
    studentList[3] = (Student){19, "noha", 20, "zagazig", 85.0};
    studentList[4] = (Student){18, "naira", 20, "zagazig", 85.0};

    for (int index = 0; index < 15; ++index) {
        printf("Student %d:\n", index + 1);
        printf("ID: %d\n", studentList[index].id);
        printf("Full Name: %s\n", studentList[index].fullName);
        printf("Age: %d\n", studentList[index].yearsOld);
        printf("Residence: %s\n", studentList[index].residence);
        printf("Grade: %.2f\n", studentList[index].grade);
        printf("-------------------------\n");
    }

    return 0;
}