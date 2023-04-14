/*
Print the following pattern for the given N number of rows.
1
21
321
4321
*/
#include<iostream>
using namespace std;


int main()
{
		int i,j,n,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			cout<<k;
			k--;
		}
		cout<<endl;
	}
}
