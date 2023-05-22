#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[n],max=arr[0];
    cout<<"Enter the size of array : ";
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<=n-1;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"Maximum of element of array is : "<<max;
}
