#include <stdio.h>
#include <stdlib.h>

// Define a structure for your data type
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes
void addNode(struct Node** head, int data);
void removeNode(struct Node** head, int data);
void displayList(struct Node* head);

int main() {
    struct Node* head = NULL;
    int choice, data;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Add Node\n");
        printf("2. Remove Node\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to add: ");
                scanf("%d", &data);
                addNode(&head, data);
                break;

            case 2:
                printf("Enter data to remove: ");
                scanf("%d", &data);
                removeNode(&head, data);
                break;

            case 3:
                displayList(head);
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

// Function to add a node to the linked list
void addNode(struct Node** head, int data) {
    // Your code here
}

// Function to remove a node from the linked list
void removeNode(struct Node** head, int data) {
    // Your code here
}

// Function to display the linked list
void displayList(struct Node* head) {
    // Your code here
}
