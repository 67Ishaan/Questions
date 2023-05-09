#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a and b : ";
    cin>>a>>b;
    c=a+b;
    a=c-a;
    b=c-b;
    cout<<"after swapping a and b are : "<<a<<" "<<b;
    return 0 ;
}
