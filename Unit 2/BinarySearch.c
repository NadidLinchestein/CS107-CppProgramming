#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;          // Start of the current search range
    int high = size - 1;  // End of the current search range

    while (low <= high) { 
        // Calculate the middle index of the current range
        // Using (high - low) / 2 prevents overflow
        int mid = low + (high - low) / 2;

        // Check if the middle element is the target
        if (arr[mid] == target) {
            return mid; // Target found, return its index
        }

        // If the target is greater than the middle element,
        // search in the right half by moving the low pointer
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If the target is smaller than the middle element,
        // search in the left half by moving the high pointer
        else {
            high = mid - 1;
        }
    }

    // If the loop ends, the target is not in the array
    return -1;
}

int main() {
    // Example sorted array (must be sorted for binary search to work)
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Target element to search for
    int target = 13;

    // Call binary search and store the result
    int result = binarySearch(arr, size, target);

    // Print the result based on the return value
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
