#include <stdio.h>
#include <string.h>

int main() {
    char str[100], strcopied[100];

    printf("Enter the string to copy: ");
    fgets(str, sizeof(str), stdin);
    strcpy(strcopied, str);

    printf("Copied string: %s\n", strcopied);

    return 0;
}