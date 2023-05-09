#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cout<<"enter the year : ";
    cin>>y;
    if(y%400==0)
    {
        cout<<"it is a leap year : "<<y;
    }
    else if(y%100==0)
    {
        cout<<"it is not a leap year : "<<y;
    }
    else if(y%4==0)
    {
        cout<<"it is a leap year : "<<y;
    }
    return 0;
}
