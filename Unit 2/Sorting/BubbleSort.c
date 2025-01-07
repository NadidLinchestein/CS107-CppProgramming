/*   
    Function to perform Bubble Sort
    Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
    This process is repeated until the list is sorted.

    Time Complexity
    Best Case (Already Sorted): O(n)
    Worst Case (Reversely Sorted): O(n^2)
    Average Case: O(n^2)

    Space Complexity
    O(1) (In-place sorting, no extra memory required)
*/

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    // Loop through all array elements
    for (int i = 0; i < n - 1; i++) {
        // Flag to detect if any swapping happens in this pass
        int swapped = 0;

        // Inner loop to compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];  // Temporary variable for swapping
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1; // Mark that a swap has occurred
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n); // Sort the array

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}