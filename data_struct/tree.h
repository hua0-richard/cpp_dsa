class Node {
    public:
        Node(int value);
        int value;
        Node* left;
        Node* right; 
        ~Node();
    
};   

class BinaryTree {
    public:
         BinaryTree(int v);
         Node* root; 
         Node* insert(int v, Node* n);
         void in_order(Node *n);
         int sum(Node *n);
};