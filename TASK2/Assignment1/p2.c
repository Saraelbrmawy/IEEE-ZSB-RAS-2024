<<<<<<< HEAD
#include <stdio.h>
#include <stdio.h>

int main() {
    int v = 0x123456;
    int *ptr = &v;  

    printf("Initial value: 0x%X\n", *ptr);  

     *ptr++;
    printf("After *ptr++: 0x%X\n", *ptr);  

    ptr = &v; 

     *++ptr; 
    printf("After *++ptr: 0x%X\n", *ptr); 

    ptr = &v;  

      ++*ptr;  
    printf("After ++*ptr: 0x%X\n", *ptr);  

    return 0;
}

/*the pointer points to the memory address of the variable , 
from pointer arithmetic these expressions (ptr++) , (++ptr) access the pointer first then increment 
so the pointed variable value is being incremented only not the pointer  value
but this expression (++*ptr) increments the value of the pointer 
=======
#include <stdio.h>
#include <stdio.h>

int main() {
    int v = 0x123456;
    int *ptr = &v;  

    printf("Initial value: 0x%X\n", *ptr);  

     *ptr++;
    printf("After *ptr++: 0x%X\n", *ptr);  

    ptr = &v; 

     *++ptr; 
    printf("After *++ptr: 0x%X\n", *ptr); 

    ptr = &v;  

      ++*ptr;  
    printf("After ++*ptr: 0x%X\n", *ptr);  

    return 0;
}

/*the pointer points to the memory address of the variable , 
from pointer arithmetic these expressions (ptr++) , (++ptr) access the pointer first then increment 
so the pointed variable value is being incremented only not the pointer  value
but this expression (++*ptr) increments the value of the pointer 
>>>>>>> origin/main
itself making it points to another memory address that is different than the first given one. */