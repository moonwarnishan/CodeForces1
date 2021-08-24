#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int i,j,ans=0;
        cin>>j;
        long long int a[j],b[j];
        for(i=0;i<j;i++)
        {
            cin>>a[i];
        }
        long long int m1=a[0];
        for(i=0;i<j;i++)
        {
            cin>>b[i];
        }
        long long int m2=b[0];



        for(i=0;i<j;i++)
        {
            if(a[i]<m1)
            {
                m1=a[i];
            }
        }
        for(i=0;i<j;i++)
        {
            if(b[i]<m2)
            {
                m2=b[i];
            }
        }

        for(i=0;i<j;i++)
        {
            ans+=max(a[i]-m1,b[i]-m2);
        }
        cout<<ans<<endl;



    }
}
