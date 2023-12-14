#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10 // Adjust the size as needed

// Function prototypes
void push(int stack[], int* top, int data);
int pop(int stack[], int* top);
void displayStack(int stack[], int top);

int main() {
    int stack[MAX_SIZE];
    int top = -1;
    int choice, data;

    do {
        // Display menu
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(stack, &top, data);
                break;

            case 2:
                data = pop(stack, &top);
                if (data != -1) {
                    printf("Popped element: %d\n", data);
                }
                break;

            case 3:
                displayStack(stack, top);
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}

// Function to push an element to the stack
void push(int stack[], int* top, int data) {
    // Your code here
}

// Function to pop an element from the stack
int pop(int stack[], int* top) {
    // Your code here
    return -1; // Placeholder, update as needed
}

// Function to display the stack
void displayStack(int stack[], int top) {
    // Your code here
}

