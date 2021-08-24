#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,x,ans;
        cin>>a>>b>>c;
        x=2*abs(b-a);

        if(a>x||b>x||c>x)
        {
            cout<<-1<<endl;
        }
        else
        {
            ans=c+(x/2);
            if(ans>x)
            {
                ans =c-(x/2);
            }
            cout<<ans<<endl;
        }


    }
}
