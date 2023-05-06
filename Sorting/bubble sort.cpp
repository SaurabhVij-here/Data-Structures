#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{5,4,3,2,1}
    for(int i=0;i<arr.size()-1;i++)
    {
        for(int j=0;j<arr.size()-i-1;j++)
        {
                if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<arr.size();i++)
    cout<<arr[i];
}