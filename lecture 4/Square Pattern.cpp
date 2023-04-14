/* Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
4444
4444
4444
*/

#include<iostream>
using namespace std;


int main()
{
	int i,j,n;
	cin>> n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<n;
		}
		cout<<endl;
	}
}


