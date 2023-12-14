#include <stdio.h>
#include <stdlib.h>

// Define a structure for your data type
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
void addnode(struct node* head,int x,int y){
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->co=x;
    newNode->pow=y;
    newNode->next=head;
    head=newNode;
}
void addnode1(struct node* head1,int x,int y){
struct node1* newNode=malloc(sizeof(struct node1));
newNode->co=x;
newNode->pow=y;
newNode->next=head1;
head1=newNode;
}
void addNode2(struct node2* head2,int x,int y){
    struct node2* newNode=(struct node2*)malloc(sizeof(struct node2));
    newNode->co=x;
    newNode->pow=y;
    newNode->next=head2;
    head2=newNode;
}
void displayList(struct node* head,struct node1* head1,struct node2* head2){
struct node* temp=head;
struct node1* temp1=head1;
struct node2* temp2=head2;
while(temp!=NULL){
    printf("%d^%d\n",temp->co,temp->pow);
    temp=temp->next;
}
while(temp1!=NULL){
    printf("%d^%d\n",temp->co,temp->pow);
    temp1=temp1->next;
}
while(temp2!=NULL){
    printf("%d^%d\n",temp->co,temp->pow);
    temp2=temp2->next;
}
}
void addPoly(struct node* head,struct node1* head1,struct node2* head2){
    struct node* temp=head;
    struct node1* temp1=head1;
    struct node2* temp2=head2;
    int flag=0;
    while(temp!=NULL){
        while(temp1!=NULL){
            if(temp->pow==temp1->pow){
                addNode2(head2,(temp->co+temp1->co),(temp1->pow));
                temp1=temp1->next;
                flag=1;
        }
    }
    if(flag==1){
        addNode2(head2,temp->co,temp->pow);
        flag=0;
    }
    temp->next=temp;
}}
// Function protottypes

int main() {
    struct node* head = NULL;
    struct node1* head1=NULL;
    struct node2* head2=NULL;
    int choice, data,coefficent;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Add node\n");
        printf("2. Remove node\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter Power and coefficent of Poly1 to add: ");
                scanf("%d %d", &data,&coefficent);
                addnode(head, data,coefficent);
                break;

            case 2:
                printf("\nEnter Power and coefficent of Poly1 to add: ");
                scanf("%d %d", &data,&coefficent);
                addnode(head1, data,coefficent);
                break;
            case 3:
            printf("\nFInd Sum of polynomial");
            addPoly(head, head1,head2);
            break;

            case 4:
                displayList(head,head1,head2);
                break;

            case 5:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}

// Function to add a node to the linked list