#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr={5,4,3,2,1};
	int i,j,n=arr.size();
	
	//selection sort
	for(i=0;i<n-1;i++)
	{
		int minindex=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minindex])
			minindex=j;
		}
		swap(arr[i],arr[minindex]);
	}
	
	for(i=0;i<n;i++)
	cout<< arr[i]<<endl; 
}
