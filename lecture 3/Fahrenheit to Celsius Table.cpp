/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
*/
#include<iostream>
using namespace std;

int main() 
{
	int S,E,W,C;
	cin>>S;
	cin>>E;
	cin>>W;

	if(S<0||S>90)
	{
		cout<<"invalid input";

	}
	if(E<S||E>900)
	{
		cout<<"invalid input";
	}
	if(W<0||W>80)
	{
		cout<<"invalid input";
	}

	while(S<E)
	{
		C=(S-32)*5.0/9;
		cout<<S<<" "<<C<<endl;
		S=S+W;
	}
}
