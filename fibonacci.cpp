#include <bits/stdc++.h>
using namespace std;
int main()
 {
    int num,n1 = 0, n2 = 1, n3;
    cout<<"enter the number : ";
    cin>>num;
    for (int i = 1; i<=num;i++) 
    {
        cout<<n1<<" ";
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }

  return 0;
 }
