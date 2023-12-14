#include <stdio.h>
#include <stdlib.h>

// Define structure for binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function prototypes
struct TreeNode* createNode(int data);
struct TreeNode* insert(struct TreeNode* root, int data);
void inorderTraversal(struct TreeNode* root);
void preorderTraversal(struct TreeNode* root);
void postorderTraversal(struct TreeNode* root);

int main() {
    struct TreeNode* root = NULL;
    int choice, data;

    do {
        // Display menu
        printf("\nBinary Tree Menu:\n");
        printf("1. Insert\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;

            case 2:
                printf("Inorder Traversal: ");
                inorderTraversal(root);
                printf("\n");
                break;

            case 3:
                printf("Preorder Traversal: ");
                preorderTraversal(root);
                printf("\n");
                break;

            case 4:
                printf("Postorder Traversal: ");
                postorderTraversal(root);
                printf("\n");
                break;

            case 5:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 5);

    return 0;
}

// Function to create a new binary tree node
struct TreeNode* createNode(int data) {
    // Your code here
    return NULL; // Placeholder, update as needed
}

// Function to insert a new node into the binary tree
struct TreeNode* insert(struct TreeNode* root, int data) {
    // Your code here
    return root; // Placeholder, update as needed
}

// Function for inorder traversal of the binary tree
void inorderTraversal(struct TreeNode* root) {
    // Your code here
}

// Function for preorder traversal of the binary tree
void preorderTraversal(struct TreeNode* root) {
    // Your code here
}

// Function for postorder traversal of the binary tree
void postorderTraversal(struct TreeNode* root) {
    // Your code here
}


