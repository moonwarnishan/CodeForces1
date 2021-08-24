#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,i,t,ans,x;
        cin>>a>>b;
        ans=  min(max(a * 2, b), max(a, b * 2));
        x=ans*ans;
        cout<<x<<endl;
    }
}
