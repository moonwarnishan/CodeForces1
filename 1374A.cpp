#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,n,j,i;
        cin>>x>>y>>n;
        i=n/x;
        j=(i*x)+y;
        if(j>n){
            cout<<((i-1)*x)+y<<endl;
        }
        else
        {
            cout<<j<<endl;
        }

    }
}
