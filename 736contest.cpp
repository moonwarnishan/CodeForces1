#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j;
        cin>>j;
        if(j%2!=0)
        {
            j--;
        }
        cout<<2<<" "<<j<<endl;
    }
}

