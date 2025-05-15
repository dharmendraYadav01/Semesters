// #include<bits/stdc++.h>
// using namespace std;
// struct node{
// 	int data;
// 	struct node*next;
// };
// struct node*start= NULL;
// struct node* adding_polynomial(struct node*);
// struct node*display(struct node*);

// int main(){
// 	start=adding_polynomial(start);
// 	display(start);
// }
// struct node* adding_polynomial(struct node* start){
// 	struct node*new_node,*ptr;
// 	new_node=new struct node;
// };
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Node* start = NULL;
struct Node* addPolynomial(Node*);
void displayPolynomial(Node*);

int main() {
    start = addPolynomial(start);
    displayPolynomial(start);
    return 0;
}

Node* addPolynomial(Node* start) {
    Node* new_node = new Node;
    new_node->next = NULL;

    int coefficient, exponent;
    cout << "Enter coefficient and exponent (0 0 to stop): ";
    cin >> coefficient >> exponent;

    if(coefficient == 0 && exponent == 0) {
        return start;
    }

    new_node->data = coefficient * pow(10, exponent);

    if(start == NULL || start->data < new_node->data) {
        new_node->next = start;
        start = new_node;
    } else {
        Node* ptr = start;
        while(ptr->next != NULL && ptr->next->data < new_node->data) {
            ptr = ptr->next;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
    }

    return addPolynomial(start);
}

void displayPolynomial(Node* start) {
    if(start == NULL) {
        cout << "0";
        return;
    }

    Node* ptr = start;
    while(ptr != NULL) {
        if(ptr->data != 0) {
            if(ptr->data > 0) {
                cout << "+";
            }
            cout << ptr->data;
        }
        ptr=ptr->next;
    }
}