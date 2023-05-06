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

void levelorder(node* root)
{
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty())
	{
		
		node* temp=q.front();
		q.pop();
		
		if(temp==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		
		else{
		
		cout<<temp->data<<" ";
		
		if(temp->left)
		q.push(temp->left);
		
		if(temp->right)
		q.push(temp->right);
		
	   }
	}
}

int main()
{

	node* root=buildtree();
	
	levelorder(root);
	
	return 0;
}
