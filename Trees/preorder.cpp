#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	
	node(int data)
	{
		this->data=data;
		left=NULL;
		right=NULL;
	}
};

node* buildtree()
{
	int data;
	cout<<"enter the data: ";
	cin>>data;
	
	if(data==-1)
	return NULL;
	
	node* root=new node(data);
	cout<<"enter data for left part of"<<data<<"node"<<endl;
	root->left=buildtree();
		cout<<"enter data for right part of"<<data<<"node"<<endl;
	root->right=buildtree();
	
	return root;
}

void preorder(node* root)
{
	if(root==NULL)
	{
		return ;
	}
	
	cout<<root->data<<" ";
	preorder(root->left);
	
	preorder(root->right);
	
}

int main()
{
	node* root=buildtree();
	
	preorder(root);
	return 0;
}
