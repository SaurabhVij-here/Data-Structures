//Basics Of Stack


#include <bits/stdc++.h>

using namespace std;

void print(stack<int> st)
{
	while(!st.empty()){
	
	
	cout<<st.top()<<endl;
	st.pop();
    }
}
int main()

{
	stack <int> st;
	st.push(10);
	st.push(20);
	st.push(35);
	st.pop();
	print(st);	
}
