/*
 
 Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -

 
 F(n) = F(n-1) + F(n-2), 
    Where, F(1) =  1, 
           F(2) = 1

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,a,b,c;
      cin>>n;
      a=0;
      b=1;
      for(int i =1;i<=n;i++)
      {
                           a=b;
              b=c;
                 c=a+b;

      }
      cout<<c;
}