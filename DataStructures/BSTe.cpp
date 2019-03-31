//#include <iostream>
//#include <queue>
//#include <stack>
//#include <algorithm>
//using namespace std;
//
//// Data structure to store a Binary Search Tree node
//struct Node
//{
//	int data;
//	Node *left, *right;
//};
//
//// Function to create a new binary tree node having given key
//Node* newNode(int key)
//{
//	Node* node = new Node;
//	node->data = key;
//	node->left = node->right = nullptr;
//
//	return node;
//}
//
//// Function to perform inorder traversal of the tree
//void inorder(Node* root)
//{
//	if (root == nullptr)
//		return;
//
//	inorder(root->left);
//	cout << root->data << " ";
//	inorder(root->right);
//}
//
//// Recursive function to insert an key into BST using a reference parameter
//void insert(Node* &root, int key)
//{
//	// if the root is null, create a new node an return it
//	if (root == nullptr)
//	{
//		root = newNode(key);
//		return;
//	}
//
//	// if given key is less than the root node, recuse for left subtree
//	// else recuse for right subtree
//	if (key < root->data)
//		insert(root->left, key);
//	else
//		insert(root->right, key);
//}
//void rightView(Node* root)
//{
//	if (!root)
//		return;
//
//	queue<Node*> q;
//	q.push(root);
//
//	while (!q.empty())
//	{
//		// number of nodes at current level
//		int n = q.size();
//
//		// Traverse all nodes of current level 
//		for (int i = 1; i <= n; i++)
//		{
//			Node* temp = q.front();
//			q.pop();
//
//			// Print the right most element 
//			// at the level
//			if (i == n)
//				cout << temp->data << " ";
//
//			// Add left node to queue
//			if (temp->left != NULL)
//				q.push(temp->left);
//
//			// Add right node to queue
//			if (temp->right != NULL)
//				q.push(temp->right);
//		}
//	}
//}
//void levelOrder(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* newNode = q.front();
//		q.pop();
//		cout << newNode->data << "    ";
//		if (newNode->right != NULL)
//		{
//			q.push(newNode->right);
//		}
//		if (newNode->left != NULL)
//		{
//			q.push(newNode->left);
//		}
//		/*if (newNode->right != NULL)
//		{
//			q.push(newNode->right);
//		}*/
//	}
//}
//void printSpiral(Node* root)
//{
//	if (root == NULL)
//		return;
//	stack<Node*> S1, S2;
//	S1.push(root);
//	while (!S1.empty() || !S2.empty())
//	{
//		while (!S1.empty())
//		{
//			Node* temp = S1.top();
//			S1.pop(); 
//			cout << temp->data<<"    ";	
//			if (temp->right)
//				S2.push(temp->right);
//			if (temp->left)
//				S2.push(temp->left);
//		}
//		while (!S2.empty())
//		{
//			Node* temp = S2.top();
//			S2.pop();
//			cout << temp->data << "     ";
//			if (temp->left)
//				S1.push(temp->left);
//			if (temp->right)
//				S1.push(temp->right);
//		}
//	}
//	
//}
//void printLeaf(Node* root)
//{
//	if (root == NULL)
//		return;
//	if (root->left == NULL&& root->right == NULL)
//	{
//		cout << root->data << "  ";
//		return;
//	}
//	printLeaf(root->left);
//	printLeaf(root->right);
//}
//int main()
//{
//	Node* root = nullptr;
//	int keys[] = { 15, 10, 20, 8, 12, 16, 25 };
//
//	for (int key : keys)
//		insert(root, key);
//	cout << "Spiral " << endl;
//	printSpiral(root);
//	cout << endl << "--------------";
//	cout << "Inorder: ";
//	inorder(root);
//	cout << endl<<"--------------";
//	cout << "Level Order";
//	levelOrder(root);
//	cout << endl << "---------------" << endl;
//	printLeaf(root);
//
//	//rightView(root);
//	return 0;
//}
