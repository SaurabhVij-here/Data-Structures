#include <bits/stdc++.h>
using namespace std;


int fun(int n)
{
	if(n==0)
	return 1;
	
		fun(n-1);
	cout<<n<<endl;
 
	
}

int funr(int n)
{
	if(n==0)
	return 1;
	
		
	cout<<n<<endl;
	funr(n-1);
 
	
}

int main()
{
	int n;
	cout<<"enter the number :  ";
	cin>>n;
	fun(n);
	cout<<"IN reverse order is : "<<endl;
	funr(n);
	
	
}

