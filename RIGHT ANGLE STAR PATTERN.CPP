#include<iostream>
using namespace std;
int main()
{
	int x,y,a;
	string z;
	cout<<"Enter the principal amount:";
	cin>>x;
	cout<<"Enter the no of years:";
	cin>>y;
	cout<<"is customer senior citizen(y/n):";
	cin>>z;
	if(z=="y"){
	a=x*y*12/100;
	cout<<"Interest amount"<<a;	
	}
	else if(z=="n"){
	a=x*y*10/100;
	cout<<"Interest amount"<<a;	
	}
	else{
		cout<<"Enter valid input";
	}
	
}
