#include <stdio.h>

void Unique(int arr[], int size) {
    printf("Unique elements in the array: ");

    for (int i = 0; i < size; i++) {
        int unique = 1;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                unique = 0;
                break;
            }
        }

        if (unique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
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

    Unique(arr, size);

}