#include<stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low <= high) {

        int mid = (low +high) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] > key)
            return binarySearch(arr, low, mid - 1, key);

        return binarySearch(arr, mid + 1, high, key);
    }

    return -1;
}

int main() {
    int size, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Key element: ");
    scanf("%d", &key);


    int result = binarySearch(arr, 0, size - 1, key);

    if (result != -1) {
        printf("The element %d is found at index %d\n", key, result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

