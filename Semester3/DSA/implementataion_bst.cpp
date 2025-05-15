#include <iostream>
using namespace std;

// Structure for a node in the binary search tree
struct node {
    int data;
    struct node* left;
    struct node* right;

    // Constructor
    node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a node into the BST
node* insertnode(node* root, int data) {
    if (root == nullptr) {
        return new node(data);
    }
    if (data < root->data) {
        root->left = insertnode(root->left, data);
    } else if (data > root->data) {
        root->right = insertnode(root->right, data);
    }
    return root;
}

// Function to perform inorder traversal
void inorderTraversal(node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    node* root = nullptr;
    int n, data;

    cout << "Enter the number of nodes in the binary search tree: ";
    cin >> n;
    cout << "Enter the data to be inserted in the binary search tree:\n";

    for (int i = 0; i < n; i++) {
        cin >> data;
        root = insertnode(root, data);
    }

    // Display the BST using inorder traversal
    cout << "Inorder Traversal of BST: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
