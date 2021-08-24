#include<bits/stdc++.h>
using namespace std;
const int Nmax=100001;
bool arr[Nmax];


void CheckPrime(int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
        arr[i]=true;
    }
    for(i=2;i<=n/2;i++)
    {
        if(arr[i]==true)
        {
            for(j=i*2;j<=n;j+=i)
            {
                arr[j]=false;
            }
        }
    }


}

int main()
{
    CheckPrime(1000);
    int i;
    for(i=2;i<=1000;i++)
    {
        if(arr[i]==true)
        {
            cout<<i<<endl;
        }
    }
}
