#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"enter your string : ";
	getline(cin,s);
	int  i=0,j=s.size()-1;
	
	while(i<=j)
	{
		swap(s[i++],s[j--]);
	}
	cout<<"the reverse string is : "<<s<<endl;
	
}
