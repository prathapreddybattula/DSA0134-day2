#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter age of a person:";
	cin>>x;
	y=18-x;
	if(x>=18){
		cout<<"You are elgible for voting";
	}
	else{
		cout<<"you are not elgible for voting.You require"<<"\t"<<y<<"\t"<<"more years for voting";
	}
}
