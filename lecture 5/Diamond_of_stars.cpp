#include<iostream>
using namespace std;


int main()
{
    
    int N;
    cin>>N;
    int i=1;
    int n =(N+1)/2;
    int m=(N-1)/2;
    while(i<=n)
    {
        int spaces=1;
        while(spaces<=n-i)
        {
            cout<<" ";
            spaces++;
        }
        int j=1;
       while(j<=(2*i-1))
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
     i=1;
    while(i<=m)
    {
        int spaces=1;
       while(spaces<=2*i-1)
        {
            cout<<" ";
            spaces++;
        }
        int j=1;
       while(j<=N-2*i)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
}