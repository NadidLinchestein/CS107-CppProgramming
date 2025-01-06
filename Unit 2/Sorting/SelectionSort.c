/*
    Selection Sort Implementation in C
    This algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from the unsorted part and putting it at the beginning.
    This process is repeated for all elements in the array, thereby sorting the entire list.

    Time Complexity
    Best Case: O(n^2)
    Worst Case: O(n^2)
    Space Complexity: O(1) - In-place sorting   
*/

#include <stdio.h>


//  Function to swap two integers. This function takes two pointers as arguments and swaps the values they point to.
void swap(int *a, int *b) {
    int temp = *a; // Store the value of *a in a temporary variable
    *a = *b;       // Assign the value of *b to *a
    *b = temp;     // Assign the value of temp (original *a) to *b
}

//  Function to perform Selection Sort on an array. The function takes an array and its size as arguments.
void selectionSort(int arr[], int n) {
    // Outer loop: Iterate over each element in the array
    for (int i = 0; i < n - 1; i++) {
        // Assume the current element is the smallest
        int minIndex = i;

        // Inner loop: Find the index of the smallest element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                // Update minIndex if a smaller element is found
                minIndex = j; 
            }
        }

        // Swap the smallest element found with the first element of the unsorted part
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

//  Function to print an array. This function takes an array and its size as arguments
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // Print each element followed by a space
        printf("%d ", arr[i]); 
    }

    // Move to the next line after printing all elements
    printf("\n");
}

// Main function to demonstrate Selection Sort
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Initialize an array with unsorted elements
    int n = sizeof(arr) / sizeof(arr[0]);     // Calculate the number of elements in the array

    // Print the original array
    printf("Original array:\n");
    printArray(arr, n); 

    // Call the selectionSort function to sort the array
    selectionSort(arr, n); 

    // Print the sorted array
    printf("Sorted array:\n");
    printArray(arr, n); 

    // Indicate successful program execution
    return 0;
}