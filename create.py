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
for i in stack:
    # Specify the file path
    file_path = f"/home/zane/Desktop/Code/git/DS Lab/Stack/{i}.c"
    # Create an empty file using os.mknod()
    try:
        
        with open(file_path,"w") as fa:
            code='''#include <stdio.h>
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
        printf("\\nStack Menu:\\n");
        printf("1. Push\\n");
        printf("2. Pop\\n");
        printf("3. Display Stack\\n");
        printf("4. Exit\\n");
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
                    printf("Popped element: %d\\n", data);
                }
                break;

            case 3:
                displayStack(stack, top);
                break;

            case 4:
                printf("Exiting the program.\\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\\n");
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

'''
            fa.write(code)
        print(f"File '{file_path}' created successfully.")
    except FileExistsError:
        print(f"File '{file_path}' already exists.")
