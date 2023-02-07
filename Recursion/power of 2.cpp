#include <bits/stdc++.h>
using namespace std;


int power(int n)
{
	if(n==0)
	return 1;
	
	return 2*power(n-1);
	
}

int main()
{
	int n;
	cout<<"enter the number :  ";
	cin>>n;
	int ans=power(n);
	cout<<"the number is : "<<ans<<endl;
	
}

