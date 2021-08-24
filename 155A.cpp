#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,mx,mn,t=0;
    cin>>j>>k;
    mx=k;
    mn=k;
    for(i=1;i<j;i++)
    {
        cin>>k;
        if(k>mx)
        {
            mx=k;
            t++;
        }
        else if(k<mn){
            mn=k;
            t++;
        }
    }
    cout<<t<<endl;

}

