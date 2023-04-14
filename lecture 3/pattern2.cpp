/*
Print the following pattern
Pattern for N = 4
   1
  23
 345
4567

The dots represent spaces.
*/
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int n,i=1,a=1,j,k=1;
	cin>>n;
	while(i<=n)
	{
		k=1;
		while(k<=n-i)
		{
			cout<<" ";
			k++;
		}
		j=1;
		a=i;
		while(j<=i)
		{
			cout<<a;
			j++;
			a++;
		}
		cout<<endl;
		i++;
	}
  
  
}


