#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    while(n%10==0)
    {
        n/=10;
    }
    long long int k = n,Reverse=0;
    while(k>0){
        Reverse = Reverse*10 + k%10;
        k/=10;
    }
    if(Reverse==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
