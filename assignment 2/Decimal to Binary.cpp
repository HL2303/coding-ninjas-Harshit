/*
Given a decimal number (integer N), convert it into binary and print.
Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.
Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.
*/


#include<iostream>
using namespace std;

int main() 
{
	int n,r;
	long   pv=1, ans=0;
	cin>>n;
	while(n>0)
	{
		r=n%2;
		ans=ans+r*pv;
		pv=pv*10;
		n=n/2;
	}
	cout<<ans;
	
}
