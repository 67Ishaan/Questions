#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int number,evenSum = 0, oddSum = 0;
	
	cout<<" Enter the Number : ";
	cin>>number;	
	
	for(int i = 1;i<=number; i++)
	{
  		if ( number % 2 == 0 ) 
		{
			evenSum=evenSum+number;
		}
		else
		{
			oddSum=oddSum+number;
		}
	}
	
	cout <<"sum of even numbers : "<<evenSum<<"\n";
	cout <<"sum of odd numbers :" <<oddSum<<"\n";
	
 	return 0;
}
