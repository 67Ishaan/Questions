#include<bits/stdc++.h>
using namespace std;
int main()
{
    float hindi,english,science,maths,computer,sum,per;
	cout<<"Enter marks of Hindi :";
	cin>>hindi;
	cout<<"Enter marks of English :";
	cin>>english;
	cout<<"Enter marks of Science :";
	cin>>science;
	cout<<"Enter marks of Math :";
	cin>>maths;
	cout<<"Enter marks of Computer :";
	cin>>computer;
	
	sum=hindi+english+science+maths+computer;
	per=sum/5;
	cout<<"Percentage of marks : "<<per<<"\n";
	
	if(per>=90&&per<=100)
	{
		cout<<"Grade A";
	}
	else if(per>=80&&per<90)
	{
		cout<<"Grade B";
	}
	else if(per>=60&&per<80)
	{
		cout<<"Grade C";
	}
	else if(per<60)
	{
		cout<<"Grade D";
	}
    return 0;
}
