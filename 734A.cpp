#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a=0,d=0,i;
    cin>>t;
    string s;
    cin>>s;
    for(i=0;i<=t;i++)
    {
        if(s[i]=='A'){
            a++;
        }
        else if(s[i]=='D')
            d++;
    }

    if(a==d){
        cout<<"Friendship"<<endl;
    }
    else if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else {
        cout<<"Danik"<<endl;
    }
}
