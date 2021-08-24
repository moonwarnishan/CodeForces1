#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,cnt=0;
        cin>>a>>b>>n;
        while(a<n)
        {
            a+=n;
            cnt++;
        }
        cout<<cnt<<endl;
    }

}
