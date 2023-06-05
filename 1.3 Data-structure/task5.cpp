#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    explicit Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinarySearchTree {
private:
    Node* root;

public:
    BinarySearchTree() {
        root = nullptr;
    }

    Node* insert(Node* root, int value) {
        if (root == nullptr) {
            root = new Node(value);
        } else if (value <= root->data) {
            root->left = insert(root->left, value);
        } else {
            root->right = insert(root->right, value);
        }

        return root;
    }

    void insert(int value) {
        root = insert(root, value);
    }

    bool search(Node* root, int value) {
        if (root == nullptr) {
            return false;
        } else if (value == root->data) {
            return true;
        } else if (value < root->data) {
            return search(root->left, value);
        } else {
            return search(root->right, value);
        }
    }

    bool search(int value) {
        return search(root, value);
    }

    void inorderTraversal(Node* root) {
        if (root != nullptr) {
            inorderTraversal(root->left);
            std::cout << root->data << " ";
            inorderTraversal(root->right);
        }
    }

    void displayInorder() {
        inorderTraversal(root);
        std::cout << std::endl;
    }
};

int main() {
    BinarySearchTree bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    bst.displayInorder();

    std::cout << "Search 40: " << (bst.search(40) ? "Found" : "Not Found") << std::endl;
    std::cout << "Search 90: " << (bst.search(90) ? "Found" : "Not Found") << std::endl;

    return 0;
}
