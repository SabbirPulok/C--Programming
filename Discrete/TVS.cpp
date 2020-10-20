#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node*left;
    Node*right;
};

void takeInput(Node* &node) {
    string left, right;
    int data;
    cin >> data; // input for root node
    node = new Node(data);

    cin >> left;
    if(left == "true") {
        takeInput(node->left); // taking input for left subtree
    }

    cin >> right;
    if(right == "true") {
        takeInput(node->right); // taking input for right subtree
    }
}
int main()
 {
    Node *root;
    takeInput(root);


}
