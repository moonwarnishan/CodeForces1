#include<bits/stdc++.h>
using namespace std;
const int NMAX=10001;

long long int SumOfMaxSubArr(int a[],int n)
{
    if(n==0) return 0;
    long long int S[NMAX],ans=a[1],MinS=0;
    S[1]=a[1];
    for(int i=2;i<=n;i++)
    {
        S[i]=S[i-1]+a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(S[i]-MinS>ans)
        {
            ans=S[i]-MinS;
        }
        else
            MinS=S[i];
    }
    return ans;
}

int main()
{
    int n,i;cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    cout<< SumOfMaxSubArr(a,n);

}
