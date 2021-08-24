#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,r[10000],n,i;
    while(cin>>n)
    {
        int m=0;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            m=m+b-a;
            r[i]=m;
        }
        sort(r,r+n);
        cout<<r[n-1]<<endl;
    }

}
