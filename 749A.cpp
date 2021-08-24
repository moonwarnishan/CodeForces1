#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;

        while(n>=2)
        {
            x++;
            n-=2;
        }
        cout<<x<<endl;

        if(n%2==1)
        {
            for(int i=0;i<x-1;i++)
            {
                cout<<2<<" ";
            }
            cout<<3<<endl;
        }
        else
            for(int i=0;i<x;i++)
            {
                cout<<2<<" ";
            }
            cout<<endl;

}
