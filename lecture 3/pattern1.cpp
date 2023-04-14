/*
Print the following pattern
Pattern for N = 4
1
23
345
4567
*/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int n,i=1,a=1,j;
	cin>>n;
	while(i<=n)
	{
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
