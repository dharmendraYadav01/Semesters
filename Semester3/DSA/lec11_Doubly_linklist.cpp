// // C++ program to Implement doubly linked list    
// #include <iostream>
// using namespace std;

// // Define a class named Node to represent a node in the
// // doubly linked list.
// struct Node {
// public:
//     // Data part of the node.
//     int data;
//     // Pointer to the next node.        
//     Node* next;
//     // Pointer to the previous node.
//     Node* prev;

//     // Constructor to initialize the node with given data.
//     Node(int value)
//     {
//         data = value;
//         prev = next = NULL;
        
//     }
// };

#include <stdio.h>
#include <stdlib.h>

// Defining a node for the doubly linked list
struct node {
    int data;
    struct node* next;
    struct node* prev;
};

// Function to create a new node
struct node* create(struct node* start) {
    struct node* new_node, *ptr;
    int num;

    printf("Enter values to insert in the list (enter -1 to stop):\n");
    scanf("%d", &num);

    while (num != -1) {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = NULL;
        new_node->prev = NULL;

        if (start == NULL) {
            start = new_node;
        } else {
            ptr = start;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->prev = ptr;
        }

        scanf("%d", &num);
    }
    return start;
}

// Function to display the doubly linked list
struct node* display(struct node* start) {
    struct node* ptr;
    if (start == NULL) {
        printf("The list is empty.\n");
        return start;
    }
    
    ptr = start;
    printf("List (Forward): ");
    while (ptr != NULL) {
        printf("%d <-> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");

    ptr=start;
    printf("List (Backward): ");
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    while(ptr!=NULL){
        printf("%d <-> ",ptr->data);
        ptr=ptr->prev;
    }
    printf("NULL\n");
    return start;
}

// Function to insert at the beginning of the list
struct node* insert_begin(struct node* start) {
    struct node* new_node;
    int num;

    printf("Enter value to insert at the beginning:\n");
    scanf("%d", &num);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->prev = NULL;
    new_node->next = start;

    if (start != NULL) {
        start->prev = new_node;
    }

    start = new_node;
    return start;
}

// Function to insert at the end of the list
struct node* insert_end(struct node* start) {
    struct node* new_node, *ptr;
    int num;

    printf("Enter value to insert at the end:\n");
    scanf("%d", &num);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = NULL;

    if (start == NULL) {
        new_node->prev = NULL;
        start = new_node;
    } else {
        ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->prev = ptr;
    }
    return start;
}

// Function to insert at a specific position in the list
struct node* insert_position(struct node* start) {
    struct node* new_node, *ptr;
    int num, pos, i;

    printf("Enter value to insert at position:\n");
    scanf("%d", &num);
    printf("Enter position:\n");
    scanf("%d", &pos);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;

    if (pos == 1) {
        start=insert_begin(start);
        return start;
        // new_node->prev = NULL;
        // new_node->next = start;
        // if (start != NULL) {
        //     start->prev = new_node;
        // }
        // start = new_node;
    } else {
        ptr = start;
        for (i = 1; ptr != NULL && i < pos - 1; i++) {
            ptr = ptr->next;
        }
        if (ptr == NULL) {
            printf("Position is greater than the length of the list.\n");
        } else {
            new_node->next = ptr->next;
            new_node->prev = ptr;
            if (ptr->next != NULL) {
                ptr->next->prev = new_node;
            }
            ptr->next = new_node;
        }
    }
    return start;
}

// Function to delete the first node of the list
struct node* delete_begin(struct node* start) {
    if (start == NULL) {
        printf("The list is empty.\n");
        return start;
    }

    struct node* ptr = start;
    start = start->next;

    if (start != NULL) {
        start->prev = NULL;
    }

    delete ptr;
    return start;
}

// Function to delete the last node of the list
struct node* delete_end(struct node* start) {
    if (start == NULL) {
        printf("The list is empty.\n");
        return start;
    }

    struct node* ptr = start;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    if (ptr->prev != NULL) {
        ptr->prev->next = NULL;
    } else {
        start = NULL;
    }

    delete ptr;
    return start;
}

// Function to delete a node at a specific position
struct node* delete_position(struct node* start) {
    int pos, i;
    struct node* ptr, *temp;

    if (start == NULL) {
        printf("The list is empty.\n");
        return start;
    }

    printf("Enter position to delete:\n");
    scanf("%d", &pos);

    if(pos==1){
        return delete_begin(start);
    }

    ptr = start;
    for (i = 1; ptr != NULL && i < pos; i++) {
        ptr = ptr->next;
    }
    
    if (ptr == NULL) {
        printf("Position is greater than the length of the list.\n");
    } else {
        if (ptr->prev != NULL) {
            ptr->prev->next = ptr->next;
        } else {
            start = ptr->next;
        }

        if (ptr->next != NULL) {
            ptr->next->prev = ptr->prev;
        }

        delete ptr;
    }

    return start;
}

int main() {
    struct node* start = NULL;

    // Create the list
    start = create(start);
    display(start);

    // Inserting at the beginning
    start = insert_begin(start);
    display(start);

    // Inserting at the end
    start = insert_end(start);
    display(start);

    // Inserting at a specific position
    start = insert_position(start);
    display(start);

    // Deleting from the beginning
    start = delete_begin(start);
    display(start);

    // Deleting from the end
    start = delete_end(start);
    display(start);

    // Deleting at a specific position
    start = delete_position(start);
    display(start);

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     struct node* next;
//     struct node* prev;
// };
// struct node* start=NULL;
// struct node* crete_node(struct node*);
// struct node* display_forward(struct node*);
// struct node* display_reverse(struct node*);
// int main(){
//     start=crete_node(start);
//     display_forward(start);
//     display_reverse(start);
//     return 0;
// }
// struct node* crete_node(struct node* start){
//     struct node* new_node;
//     struct node* last=NULL;
//     int num;
//     cout<<"Enter the data:";
//     cin>>num;
//     while(num!=-1){
//         new_node=new struct node;
//         new_node->data=num;
//         new_node->next=NULL;
//         new_node->prev=last;
//         if(last!=NULL){
//             last->next=new_node;
//         }
//         else{
//             start=new_node;
//         }
//         last=new_node;
//         cout<<"Enter the data:";
//         cin>>num;
//     }
//     return start;
// }
// struct node* display_forward(struct node* start){
//     struct node* ptr;
//     ptr= start;
//     while(ptr!=NULL){
//         printf("%d <-> ",ptr->data);
//         ptr=ptr->next;
//     }
//     cout << "NULL" << endl;
//     return start;
// }
// struct node* display_reverse(struct node* start){
//     struct node* ptr=start;
//     if(ptr==NULL){
//         cout<<"List is empty"<<endl;
//         return;
//     }
//     while(ptr->next!=NULL){
//         ptr=ptr->next;
//     }
//     cout<<"Reverse list:";
//     while

// }