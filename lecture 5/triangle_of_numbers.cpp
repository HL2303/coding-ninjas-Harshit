#include <iostream>
using namespace std;

int main() 
{
    int i,j,k,n,d;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(k=i;k<=2*i-2;k++)
        {
            cout<<k;
            
        }
        for(d=2*i-1;d>i-1;d--)
        {
            cout<<d;
        }
        cout<<endl;
    }
}
