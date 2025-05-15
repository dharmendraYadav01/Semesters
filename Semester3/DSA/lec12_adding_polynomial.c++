#include <bits/stdc++.h>
using namespace std;

struct node {
    int coeff;
    int pow;
    struct node* next;

    node(int c, int p) : coeff(c), pow(p), next(NULL) {}
};

struct node* add_polynomial(struct node* head1, struct node* head2,) {
    if (!head1) return head2;
    if (!head2) return head1;

    struct node* result = NULL;
    struct node** tail = &result;

    while (head1 && head2) {
        if (head1->pow > head2->pow) {
            *tail = new node(head1->coeff, head1->pow);
            head1 = head1->next;
        } else if (head2->pow > head1->pow) {
            *tail = new node(head2->coeff, head2->pow);
            head2 = head2->next;
        } else {
            int sum_coeff = head1->coeff + head2->coeff;
            if (sum_coeff != 0) { 
                *tail = new node(sum_coeff, head1->pow);
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        if (*tail) tail = &((*tail)->next); 
    }

    while (head1) {
        *tail = new node(head1->coeff, head1->pow);
        tail = &((*tail)->next);
        head1 = head1->next;
    }
    while (head2) {
        *tail = new node(head2->coeff, head2->pow);
        tail = &((*tail)->next);
        head2 = head2->next;
    }

    return result;
}

void printlist(struct node* head) {
    struct node* curr = head;
    while (curr) {
        cout << curr->coeff << "x^" << curr->pow;
        if (curr->next) cout << " + ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    // Create first polynomial: 5x^2 + 4x^1 + 3x^0
    struct node* head1 = new node(5, 2);
    head1->next = new node(4, 1);
    head1->next->next = new node(3, 0);

    // Create second polynomial: -5x^1 - 5x^0
    struct node* head2 = new node(-5, 1);
    head2->next = new node(-5, 0);

    struct node* result = add_polynomial(head1, head2);

    printlist(result);

    return 0;
}
