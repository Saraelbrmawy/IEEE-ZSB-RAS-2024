<<<<<<< HEAD
#include <stdio.h>

int main() {

    int *p1;
    char *p2;
    long long *p3;
    printf("Before :\n");
    printf("p1 : %d\n", p1); 
    printf("p2 : %c\n", p2); 
    printf("p3 : %lld\n", p3); 
   
    p1++;
    p2++;
    p3++;
    printf("\nAfter :\n");
    printf("p1 : %d\n", p1); 
    printf("p2 : %c\n", p2); 
    printf("p3 : %lld\n", p3); 

    return 0;
}
//int size is 4 bytes ,so ++p1 will point to next intger
//char size is 1 bytes ,so ++p2 will point to next character
//long long size is 8 bytes, so ++p3 will point to next long long
=======
#include <stdio.h>

int main() {

    int *p1;
    char *p2;
    long long *p3;
    printf("Before :\n");
    printf("p1 : %d\n", p1); 
    printf("p2 : %c\n", p2); 
    printf("p3 : %lld\n", p3); 
   
    p1++;
    p2++;
    p3++;
    printf("\nAfter :\n");
    printf("p1 : %d\n", p1); 
    printf("p2 : %c\n", p2); 
    printf("p3 : %lld\n", p3); 

    return 0;
}
//int size is 4 bytes ,so ++p1 will point to next intger
//char size is 1 bytes ,so ++p2 will point to next character
//long long size is 8 bytes, so ++p3 will point to next long long
>>>>>>> origin/main
