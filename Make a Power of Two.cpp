//Not complete

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int a,d;
        int cnt=0;
        cin>>a;
        int s = trunc(log10(a)) + 1;
        if(sqrt(a))
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=s;i>0;i--)
            {
                d=a-(s*100);
                cnt++;
                if(sqrt(d))
                {
                    cout<<cnt<<endl;
                    break;
                }
            }
        }


    }
}
