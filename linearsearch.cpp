#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f,i;
    cin>>n;
    vector<int>v;//int v[]=[]
    for( i=0;i<n;i++)
    {
        int b;
        cin>>b;
        v.push_back(b);
    }
    cin>>f;
    for( i=0;i<n;i++)
    {
        if(f==v[i])
        {
            cout<<"found";
            break;
        }
       
    }
    if(i>=n)
    {
        cout<<"not found";
    }
    return 0;
}
