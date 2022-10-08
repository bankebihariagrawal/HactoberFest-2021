#include <bits/stdc++.h> 
using namespace std; 

class node 
{ 
	public: 
	int data; 
	node* left; 
	node* right; 
}; 

node* newNode(int data) 
{ 
	node* Node = new node(); 
	Node->data = data; 
	Node->left = NULL; 
	Node->right = NULL; 
		
	return(Node); 
} 

int size(node* node) 
{ 
	if (node == NULL) 
		return 0; 
	else
		return(size(node->left) + 1 + size(node->right)); 
} 

int main() 
{ 
	node *root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	
	cout << "Size of the tree is " << size(root); 
	return 0; 
} 

// C++ Program to Find Area of Rectangle
#include <iostream>
using namespace std;

int main(){
    int length, breadth, area;
    
    // Asking for input
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    
    // Calculating area
    area = length * breadth;
    
    // Display output
    cout << "Area of Rectangle: " << area;
    return 0;
}