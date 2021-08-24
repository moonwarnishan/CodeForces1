#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,m;
    cin>>s>>t;
    reverse(s.begin(), s.end());
    if(t==s)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
