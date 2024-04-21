#include <stdio.h>
typedef struct {
    char name[50];
    int age;
} Info;
int main() {
    Info person = {"sara", 22};
    Info *person_ptr = &person;
    printf("Name: %s\n", person_ptr->name);
    printf("Age: %d\n", person_ptr->age);
    return 0;
}