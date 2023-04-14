/*
E
DE
CDE
BCDE
ABCDE
*/

#include<iostream>
using namespace std;


int main() 
{
    int i,j,n;
    char k,ch;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            ch='A'+(n-i);
            k=ch+j-1;
            cout<<k;
            k++;

        }
        cout<<endl;
    }   
}
