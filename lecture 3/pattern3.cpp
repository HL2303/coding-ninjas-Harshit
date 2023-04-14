/*
Print the following pattern
Pattern for N = 4
   *
  ***
 *****
*******
The dots represent spaces.
*/
#include<iostream>
using namespace std;


int main()
{
	int i=1,j,k,n;
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=n-i)
		 {
			 cout<<" ";
			 j++;
		 }
		 k=1;
		 while(k<=(2*i-1))
		 {
			 cout<<"*";
			 k++;
		 }
		 cout<<endl;
		 i++;
	}
}





