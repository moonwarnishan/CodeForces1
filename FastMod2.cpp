#include<bits/stdc++.h>
using namespace std;

int FastExpo(int a,long long int n, int MOD)
{
    int ans=1;
    while(n>=1)
    {
        if(n%2==0)
        {
            a=(1LL*a*a)%MOD;
            n/=2;
        }
        else
        {
            ans=(1LL*ans*a)%MOD;
            n--;
        }

    }
    return ans;

}



int main()
{
    cout<<FastExpo(7,10,1000000007);
}
