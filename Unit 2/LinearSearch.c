#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {  // Check if the current element matches the target
            return i;  // Return the index of the found element
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    // Example array and target
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);  // Input the target number from the user

    // Perform the search
    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
