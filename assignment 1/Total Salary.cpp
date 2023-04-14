/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
*/
#include<iostream>
using namespace std;

int main() {
	int  allow1,total1;
	float total,hra,da,pf,bas,r;
	char allow;
	cin>>bas;
	cin>>allow;
	if(bas>7500000)
	{
		cout<<"invalid input";
	}
	if(allow==65)
	{
		allow1=1700;
	}
	else if(allow==66)
	{
		allow1=1500;
	}
	else
	{
		allow1=1300;
	}
	hra=0.20*bas;
	da=0.50*bas;
	pf=0.11*bas;

	total=bas+hra+da+allow1-pf;

	total1=total;

	r=total-total1;	
	if(r>0.5)
	{
		total1=total1+1;
	}
	else if (r<0.5)
	{
		total1=total1;
	}
	
	cout<<total1;
}
