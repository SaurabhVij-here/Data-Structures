#include <iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	
	int i,number,hash[256]={0};
	//there are total 256 characters in ASCII value  system
	
	for(i=0;i<s.size();i++)
	{
		hash[s[i]]++;
	}
	cout<<"enter how many characters you want to search : ";
	cin>>number;
	while(number--)
	{
		char ch;
		cout<<"enter the character: ";
		cin>>ch;
		cout<<"the count of the character is : "<<hash[ch]<<endl;
	}
}
