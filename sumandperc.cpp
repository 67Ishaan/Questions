#include<bits/stdc++.h>
using namespace std;
int main()
{
    float hindi, english, science,maths,computer,sum , percentage;
	cout<<"Enter marks of hindi :";
	cin>>hindi;
	cout<<"Enter marks of english :";
	cin>>english;
    cout<<"Enter marks of science :";
	cin>>science;
    cout<<"Enter marks of maths :";
	cin>>maths;
    cout<<"Enter marks of computer :";
	cin>>computer;
	sum=hindi+english+science+maths+computer;
	cout<<"Sum of five subjects is : "<<sum<<"\n";
	
	percentage=sum/5;
	cout<<"Percentage if five subjects is : "<<percentage<<"\n";
	return 0;
}
