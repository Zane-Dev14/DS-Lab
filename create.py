import os
all='''Polynomial Sum Program(List)
Matrix List
Circular Queue 
Array Queue 
Stack Array 
Priority Queue Array
Double-Ended Queue Array
Infix to Postfix(Stack)
Postfix evaluation(Stack)
Linked List 
Stack Linked List
Queue Linked List
Reverse Queue Content
Polynomial Linked List
Student List 
Doubly Linked List
Binary Tree Operations
Binary Search Tree
Sort with Binary Tree
Graph Search Operations
File Sorting Operations
Heap Sort
Hash Table Chaining
Hash Table Linear Probing'''
questions :str =[ f"{index+1}:{i}" for index,i in enumerate(all.split("\n"))] 
stack :str=[i for i in questions if ("Stack" in i)or("Queue" in i)]
Linked :str=[i for i in questions if "List" in i]
heap:str=[i for i in questions if "Heap" in i]
tree:str=[i for i in questions if ("Operations" in i)or("Tree" in i)]
print(stack)
print(Linked)
for i in Linked:
    # Specify the file path
    file_path = f"/home/zane/Desktop/Code/git/DS Lab/BinaryTree/{i}.py"
    # Create an empty file using os.mknod()
    try:
        
        with open(file_path,"w") as fa:
            code='''#include <stdio.h>
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
'''
            fa.write(code)
        print(f"File '{file_path}' created successfully.")
    except FileExistsError:
        print(f"File '{file_path}' already exists.")
