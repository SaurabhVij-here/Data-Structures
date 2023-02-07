#include <bits/stdc++.h>
using namespace std;


int fact(int n)
{
	if(n==0)
	return 1;
	
	return n*fact(n-1);
	
}

int main()
{
	int n;
	cout<<"enter the number :  ";
	cin>>n;
	int ans=fact(n);
	cout<<"the factorial of the number is : "<<ans<<endl;
	
}

