/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is  
*/
#include <iostream>

using namespace std;

int main() {
    // take inputs from user
    int x;
    int n;
    
    cin >> x;
    
    cin >> n;

	if(x<0||x>8)
	{
		cout<<"invalid input";
	}
	if(n<0||n>9)
	{
		cout<<"invalid input";
	}


    int result = 1.;
    if (x == 0 && n == 0) {
        result = 1;  
    } else if (n >= 0) {
        for (int i = 1; i <= n; i++) {
            result = result *x;
        }
    } else {
        for (int i = 1; i <= -n; i++) {
            result = result/x;
        }
    }

    
    cout << result ;

    return 0;
}


