#include <iostream>
#include "tree.h"
using namespace std; 

Node:: Node(int value) {
    this->value = value; 
}

// binary tree

    BinaryTree::BinaryTree(int v) {
        this->root = new Node(v);
    }
    
    Node* BinaryTree::insert (int v, Node* n) {
        if (!n) {
            return new Node(v);
        }

        if (v > n->value) {
            n->right = insert(v, n->right);
        }

        if (v < n->value) {
            n->left = insert(v, n->left); 
        }
        return n;        
    }

    // DFS traversals
    void BinaryTree::in_order(Node *n) {
        if (!n) {
            return; 
        }
        in_order(n->left);
        cout << n->value << endl; 
        in_order(n->right); 
    }


    // operations
    int BinaryTree::sum(Node *n) {
        if (!n) {
            return 0; 
        }
        return n->value + sum(n->left) + sum(n->right);
    }


int main() {
    BinaryTree bst = BinaryTree(0);
    cout << bst.sum(bst.root) << endl;
    return 0;
}