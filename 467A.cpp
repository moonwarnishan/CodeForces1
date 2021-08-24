#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(abs(a-b)>=2)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
