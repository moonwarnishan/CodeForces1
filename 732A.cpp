#include<bits/stdc++.h>
using namespace std;

int NumOfCoin(int k,int r)
{
    int i=0;
    while(true)
    {
        i++;
        int h=k*i;

        if(h%10==0 || h%10==r)
        {
            break;
        }
    }
    return i;


}

int main()
{
    int k,r;
    cin>>k>>r;
    cout<<NumOfCoin(k,r)<<endl;
}
