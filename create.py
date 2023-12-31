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
for i in heap:
    # Specify the file path
    file_path = f"/home/zane/Desktop/Code/git/DS Lab/Heap/{i}.c"
    # Create an empty file using os.mknod()
    try:
        
        with open(file_path,"w") as fa:
            code='''#include <stdio.h>
#include <stdlib.h>

// Function prototypes for binary heap
void insertHeap(int heap[], int* size, int data);
int extractMin(int heap[], int* size);
void displayHeap(int heap[], int size);

// Function prototypes for file sorting
void quickSortFile(char* file_path);

int main() {
    int heap[100];  // Assuming a max heap with a maximum size of 100
    int heap_size = 0;

    int choice;

    do {
        // Display menu
        printf("\\nMenu:\\n");
        printf("1. Insert into Heap\\n");
        printf("2. Extract Min from Heap\\n");
        printf("3. Display Heap\\n");
        printf("4. Quick Sort from File\\n");
        printf("5. Exit\\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert into the heap: ");
                int data;
                scanf("%d", &data);
                insertHeap(heap, &heap_size, data);
                break;

            case 2:
                if (heap_size > 0) {
                    printf("Extracted Min: %d\\n", extractMin(heap, &heap_size));
                } else {
                    printf("Heap is empty.\\n");
                }
                break;

            case 3:
                displayHeap(heap, heap_size);
                break;

            case 4:
                printf("Enter the path to the file for quick sort: ");
                char file_path[100];
                scanf("%s", file_path);
                quickSortFile(file_path);
                break;

            case 5:
                printf("Exiting the program.\\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\\n");
        }

    } while (choice != 5);

    return 0;
}

// Function to insert into a binary heap
void insertHeap(int heap[], int* size, int data) {
    // Your code here
}

// Function to extract the minimum element from a binary heap
int extractMin(int heap[], int* size) {
    // Your code here
    return -1; // Placeholder, update as needed
}

// Function to display the binary heap
void displayHeap(int heap[], int size) {
    // Your code here
}

// Function to perform quick sort on data from a file
void quickSortFile(char* file_path) {
    // Your code here
}


'''
            fa.write(code)
        print(f"File '{file_path}' created successfully.")
    except FileExistsError:
        print(f"File '{file_path}' already exists.")
