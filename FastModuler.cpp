#include<bits/stdc++.h>
using namespace std;

int FastExpo(int a, int n, int MOD)
{
    if(n==0)
    {
        return 1;
    }
    //a^even=    (a^2)^n/2
    if(n%2==0)
    {
        return FastExpo((1LL*a*a)%MOD,n/2,MOD);
    }
    //a*a^n-1
    return  (1LL*a*FastExpo(a,n-1,MOD))%MOD;
}



int main()
{
    cout<<FastExpo(2,3,3);
}
