#include <stdio.h>

void findMaxMin(int arr[], int size, int *max, int *min) {
    *max = arr[0];  // Assume the first element is the maximum
    *min = arr[0];  // Assume the first element is the minimum

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];  // Update the maximum if a larger element is found
        }
        if (arr[i] < *min) {
            *min = arr[i];  // Update the minimum if a smaller element is found
        }
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

    int max, min;
    findMaxMin(arr, size, &max, &min);

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
