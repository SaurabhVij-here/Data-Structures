#include <iostream>
using namespace std;
int main()
{
	int i,n,number,max=INT_MIN;
	cin>>n;
	int arr[n];
	 for(i=0;i<n;i++)
	 cin>>arr[i];
	 
	 for(i=0;i<n;i++)
	 {
	 	if(arr[i]>max)
	 	max=arr[i];
	 }
	 int hash[max+1]={0};
	 for(i=0;i<n;i++)
	 {
	 	hash[arr[i]]++;
	 }
	  
	  cout<<"Enter the number you want to search : ";
	  cin>>number;
	  cout<<"the count of the number is : "<<hash[number];
	 
}
