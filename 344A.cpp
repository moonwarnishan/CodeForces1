#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,i;
    cin>>j;
    int arr[j],cnt=0;
    for(i=0;i<j;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<j;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
