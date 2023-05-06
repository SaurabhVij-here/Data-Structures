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

	int findheight(node* root)
	{
		if(root==NULL)
		return 0;
		
		int leftheight=findheight(root->left);
		int rightheight=findheight(root->right);
		
		int ans=max(leftheight,rightheight) + 1;
		
		return ans;
	}

int main()
{

	node* root=buildtree();
	
	int height=findheight(root);
	
	cout<<"the height is: "<<height<<endl;
	return 0;
}
