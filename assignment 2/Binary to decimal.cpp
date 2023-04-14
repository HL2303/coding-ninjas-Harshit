/*
Given a binary number as an integer N, convert it into decimal and print.
*/

#include<iostream>
using namespace std;

int main() 
{
   int n,sum=0,p=1;
   cin>>n;

   while(n>0)
   {
      sum = sum+(n%10)*p;
      p=p*2;
      n=n/10;
   }
   cout<<sum;
   
}
