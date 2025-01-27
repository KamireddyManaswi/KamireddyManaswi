#include <stdio.h>

// Function to display the array
void displayArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element
void insertElement(int arr[], int *n, int element, int position) {
    if (position > *n || position < 0) {
        printf("Invalid position or array is full!\n");
        return;
    }

    // Shift elements to the right
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[position] = element;
    (*n)++; // Increment the size of the array
    printf("Element inserted successfully.\n");
}

// Function to delete an element
void deleteElement(int arr[], int *n, int position) {
    if (position >= *n || position < 0) {
        printf("Invalid position!\n");
        return;
    }

    // Shift elements to the left
    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--; // Decrement the size of the array
    printf("Element deleted successfully.\n");
}

// Function to sort the array (Bubble Sort)
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted successfully.\n");
}

// Main function
int main() {
    
    int n, choice, element, position;

    // Input the initial array size and elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
      int arr[n];
    if (n < 0) {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Menu-driven interface
    do {
        printf("\nMenu:\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Sort Array\n");
        printf("4. Display Array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
             {
        case 1:
            printf("Enter the element to insert: ");
            scanf("%d", &element);
            printf("Enter the index (0 to %d): ", n);
            scanf("%d", &position);
            insertElement(arr, &n, element, position);
            break;

        case 2:
            printf("Enter the index to delete (0 to %d): ", n - 1);
            scanf("%d", &position);
            deleteElement(arr, &n, position);
            break;

        case 3:
            sortArray(arr, n);
            break;

        case 4:
            displayArray(arr, n);
            break;

        case 5:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
   while(choice==5);
}
