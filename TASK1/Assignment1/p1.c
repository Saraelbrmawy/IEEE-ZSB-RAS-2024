#include <stdio.h>

int Duplicates(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size - 1; i++) {
      
        if (arr[i] == -1) {
            continue;
        }

        
        int occurrences = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                occurrences++;
                arr[j] = -1; 
            }
        }

        if (occurrences > 1) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicates = Duplicates(arr, size);

    printf("Total number of duplicate elements: %d\n", duplicates);


}