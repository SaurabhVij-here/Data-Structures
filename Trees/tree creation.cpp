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

int main()
{
	int data;
	cout<<"enter the root data: "<<endl;
	cin>> data;
	node* root=buildtree();
	
	return 0;
}
