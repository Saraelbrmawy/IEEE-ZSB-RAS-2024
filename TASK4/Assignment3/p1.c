#include <stdio.h>
typedef struct {
    int id;
    char name[50];
    char class_id;
} Test1;
typedef struct {
    char name[50];
    int id;
    char class_id;
} Test2;
int main() {
    printf("Size of Test1: %lu\n", sizeof(Test1));
    printf("Size of Test2: %lu\n", sizeof(Test2));
    return 0;
}

//the size of the struct remains unchanged regardless of the order of definition. 