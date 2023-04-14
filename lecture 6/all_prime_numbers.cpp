
/*
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
*/
#include <iostream>
using namespace std;

int main()
{
	
     int N, i, j, prime, n;
    cin >> N; 
      
    for(i = 2; i <= N; i++){
        prime = 0;
        for(j = 2; j <= i/2; j++){
             
             if(i % j == 0){
                 prime = 1;
                 break;
             }
        }
           
        if(prime==0 && N!= 1)
            cout << i <<endl;
    }
 
   return 0;
}
