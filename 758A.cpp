#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,sum=0;
    cin>>t;
    long long int arr[t];
    for(i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    int mx=arr[0];
    for(i=0;i<t;i++)
    {
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    for(i=0;i<t;i++)
    {
        sum=sum+(mx-arr[i]);
    }
    cout<<sum<<endl;


}
