/*
    Linear search or sequential search is a method for finding an element within a list. 
    It sequentially checks each element of the list until a match is found or the whole list has been searched.
*/

#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        // Check if the current element matches the target
        if (arr[i] == target) {  
            // Return the index of the found element
            return i;  
        }
    }

    // Return -1 if the target is not found
    return -1;  
}

int main() {
    // Example array and target
    int arr[] = {10, 20, 30, 40, 50};
    
    // Calculate the number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    // Input the target number from the user
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Perform the search
    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
