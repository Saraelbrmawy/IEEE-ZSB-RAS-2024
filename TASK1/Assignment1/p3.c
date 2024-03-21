#include <stdio.h>

void countfrequency(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == -1) {
            continue;
        }
     
        int count = 1; 
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        printf("Frequency of %d = %d\n", arr[i], count);
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    countfrequency(arr, size);
}