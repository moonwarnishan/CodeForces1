#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,sum=0,i,j;
    cin>>t;
    long long int a[3];
    for(i=0;i<t;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[j];
            sum+=a[j];
        }
    }
    if(sum==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
