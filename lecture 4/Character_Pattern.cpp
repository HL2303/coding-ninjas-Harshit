/*
Print the following pattern for the given N number of rows
A
BC
CDE
DEFG

*/
#include<iostream>
using namespace std;


int main(){

 int i,j,n;
    cin>>n;
    char k,ch;
    for(i=1;i<=n;i++)
    {
        ch='A'+i-1;
		for(j=1;j<=i;j++)
        {
            k=ch+j-1;
			cout<<k;
            k=k+1;
        }
        cout<<endl;
    }

  
}


