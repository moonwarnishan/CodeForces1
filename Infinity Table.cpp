#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,j,k,m;
        cin>>n;
        i=ceil((double)sqrt(n));
        k=sqrt(n);
        k*=k;
        if(n==k)
        {
            cout<<i<<" "<<1<<endl;
        }
        else if(n-k<=i)
        {
            cout<<n-k<<" "<<i<<endl;
        }
        else
        {
            m=i*i;
            cout<<i<<" "<<(m-n)+1<<endl;
        }



    }
}
