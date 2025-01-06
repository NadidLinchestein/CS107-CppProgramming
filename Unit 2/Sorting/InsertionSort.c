/*
    Insertion Sort Implementation in C

    This algorithm sorts an array by building the sorted part one element at a time.
    It works by taking each element and inserting it into its correct position in the sorted section.
    
    Time Complexity
    Best - O(n)
    Average - O(n^2)
    Worst - O(n^2)
    
    Space Complexity: 
    O(1) (In-place sorting)
*/

#include <stdio.h>

// Function to perform Insertion Sort on an array
void insertionSort(int arr[], int size) {
    // Loop through the array starting from the second element
    for (int i = 1; i < size; i++) {
        // Store the current element to be compared
        int key = arr[i];

        // Initialize the previous index
        int j = i - 1;

        // Shift elements of arr[0..i-1] that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--; // Move the pointer one step back
        }

        // Insert the key at the correct position
        arr[j + 1] = key;

        // Print the array after each pass for better understanding
        printf("Pass %d: ", i);
        for (int k = 0; k < size; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

// Main function to test the insertionSort function
int main() {
    // Define and initialize the array to be sorted
    int arr[] = {12, 11, 13, 5, 6};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Call the insertionSort function
    insertionSort(arr, size);

    // Print the sorted array
    printf("\nSorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}