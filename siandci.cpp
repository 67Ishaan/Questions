#include<bits/stdc++.h>
using namespace std;
int main()
{
    float prin, rate , time , amount, si, ci;
	
	
	cout<<"Enter Principle : ";
	cin>>prin;
	cout<<"Enter Rate : ";
	cin>>rate;
	cout<<"Enter Time : ";
	cin>>time;
	
	si=(prin*rate*time)/100;
	
	cout<<"Simple Interest:"<<si<<"\n";
	amount = prin*(pow((1 + rate / 100), time));
	ci =  amount - prin;
	cout<<"Compound Interest : "<<ci<<"\n";
    return 0;
}
