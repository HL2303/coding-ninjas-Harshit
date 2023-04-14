/*
4444
333
22
1
*/
#include<iostream>
using namespace std;


int main()
{
	int i,j,k,n;
	cin>>n;;
	for(i=1;i<=n;i++)
	{
		k=n-i+1;
		for(j=n;j>=i;j--)
		{
			
			cout<<k;
		}
		cout<<endl;
	}
}
