#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n , i , cnt=0 , m=1 , c=1 ;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]>=ar[i-1])
        {
            cnt++;
            c = max(c,cnt);
        }
        else
        {
           cnt=1;
        }
    }
    cout<<c<<endl;
}
