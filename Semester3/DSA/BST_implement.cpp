#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    // Constructor to initialize a new node
    node(int val) {
        data = val;
        left = right = NULL;
    }
};

node* root = NULL;  // Define root globally

void insert(int data) {
    node* new_node = new node(data);

    if (root == NULL) {
        root = new_node;
        return;
    }

    node* curr = root;
    node* parent = NULL;

    // Find the correct position for the new node
    while (curr != NULL) {
        parent = curr;
        if (data < curr->data) {
            curr = curr->left;
        } else {
            curr = curr->right;
        }
    }

    // Insert the node at the determined position
    if (data < parent->data) {
        parent->left = new_node;
    } else {
        parent->right = new_node;
    }
}

// In-order traversal to verify the tree
void inorder(node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    int n, value;

    cout << "Enter the number of nodes to insert: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        insert(value);
    }

    cout << "\nIn-order traversal of the BST: ";
    inorder(root);

    return 0;
}
