/*
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).

*/
#include<iostream>
using namespace std;

int main()
{
	char c;
	int count1=0,count2=0,count3=0;
	c=cin.get();
	while(c != '$')
	{
		// cin>>c;
		// if(c>=65||c<=90)
		// {
		// 	continue;
		// }
		if(c>=97 && c<=122)
		{
			
			count1=count1+1;
			
		}
		else if(c>=48 && c<=57)
		{
			count2=count2+1;
		}
		else
		{
			count3=count3+1;
		}
		c = cin.get();

	}
	 cout<<count1<<" "<<count2<<" "<<count3;
}


