#include <stdio.h>
#include <stdlib.h>

struct node {
    int co;
    int pow;
    struct node* next;
};

struct node1 {
    int co;
    int pow;
    struct node1* next;
};

struct node2 {
    int co;
    int pow;
    struct node2* next;
};

void addnode(struct node** head, int x, int y) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->co = x;
    newNode->pow = y;
    newNode->next = *head;
    *head = newNode;
}

void addnode1(struct node1** head1, int x, int y) {
    struct node1* newNode = (struct node1*)malloc(sizeof(struct node1));
    newNode->co = x;
    newNode->pow = y;
    newNode->next = *head1;
    *head1 = newNode;
}

void addNode2(struct node2** head2, int x, int y) {
    struct node2* newNode = (struct node2*)malloc(sizeof(struct node2));
    newNode->co = x;
    newNode->pow = y;
    newNode->next = *head2;
    *head2 = newNode;
}

void displayList(struct node* head, struct node1* head1, struct node2* head2) {
    struct node* temp = head;
    printf("Poly 1:\n");
    while (temp != NULL) {
        printf("%d^%d ", temp->co, temp->pow);
        if(temp->next != NULL) printf("+");
        else printf("\n");
        temp = temp->next;
    }

    struct node1* temp1 = head1;
    printf("Poly 2:\n");
    while (temp1 != NULL) {
        printf("%d^%d", temp1->co, temp1->pow);
                if(temp1->next != NULL) printf("+");
        else printf("\n");
        temp1 = temp1->next;
    }

    struct node2* temp2 = head2;
    printf("Sum:\n");
    while (temp2 != NULL) {
        printf("%d^%d", temp2->co, temp2->pow);
                if(temp2->next != NULL) printf("+");
        else printf("\n");
        temp2 = temp2->next;
    }
}

void addPoly(struct node* head, struct node1* head1, struct node2** head2) {
    struct node* temp = head;

    while (temp != NULL) {  
            struct node1* temp1 = head1;

        while (temp1 != NULL) {
            if (temp->pow == temp1->pow) {
                addNode2(head2, (temp->co + temp1->co), (temp1->pow));
                temp1=head1;
                break;
            }
            temp1 = temp1->next;

        }
        if (temp1 == NULL) {
            addNode2(head2, temp->co, temp->pow);
        }
        temp = temp->next;
    }
}

int main() {
    struct node* head = NULL;
    struct node1* head1 = NULL;
    struct node2* head2 = NULL;
    int choice, data, coefficent;

    do {
        printf("\nMenu:\n");
        printf("1. Add node\n");
        printf("2. Add to 2nd poly node\n");
        printf("3. Find Sum\n");
        printf("4. Display sum\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter Coefficient and Power of Poly1 to add: ");
                scanf("%d %d", &data, &coefficent);
                addnode(&head, coefficent, data);
                break;

            case 2:
                printf("\nEnter Coefficient and Power of Poly1 to add: ");
                scanf("%d %d", &data, &coefficent);
                addnode1(&head1, coefficent, data);
                break;
            case 3:
                printf("\nFind Sum of polynomial\n");
                addPoly(head, head1, &head2);
                break;

            case 4:
                displayList(head, head1, head2);
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
