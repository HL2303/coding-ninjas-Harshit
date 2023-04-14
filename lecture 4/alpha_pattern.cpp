/*
Print the following pattern for the given N number of rows
A
BB
CCC
*/

#include<iostream>
using namespace std;


int main()
{
    int i,j,n;
    cin>>n;
    char k;
    k=65;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k;
            
        }
        k=k+1;
        cout<<endl;
    }

}
