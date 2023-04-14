/*
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
*/
#include<iostream>
using namespace std;

int main() {
	int n,even,odd,r;
	cin>>n;
	even=0;
	odd=0;
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		{
			even=even+r;
		}
		else
		{
			odd=odd+r;
		}
		n=n/10;
	}
	cout<<even<<" "<<odd;

	
}
