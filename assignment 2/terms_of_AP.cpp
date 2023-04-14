/*
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
*/
#include <iostream>
using namespace std;
int main()
{
	 int x,count=1,i=1,a;
    cin>>x;
    while(count<=x)
    {
        a=(3*i)+2;
        if (a % 4 != 0) {
          cout << a << " ";
          count++;
        }
        i++;
    }
}
