#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);
    printf("The second largest number in the array is: %d\n", secondLargest);

    return 0;
}
