<<<<<<< HEAD
#include <stdio.h>
void increment(int *num) {
    (*num)++;
}
int main() {
    int number = 5;
    void (*incrementPtr)(int *);  
    incrementPtr = &increment;  
    incrementPtr(&number);  
    printf("New value: %d\n", number);  
    return 0;
=======
#include <stdio.h>
void increment(int *num) {
    (*num)++;
}
int main() {
    int number = 5;
    void (*incrementPtr)(int *);  
    incrementPtr = &increment;  
    incrementPtr(&number);  
    printf("New value: %d\n", number);  
    return 0;
>>>>>>> origin/main
}