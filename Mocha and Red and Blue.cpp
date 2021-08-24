#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n-1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int j=n-1;j>=0;j--)
        {

                if(a[j]=='B')
                {
                    if(a[j-1]=='?')
                    {
                        a[j-1]='R';
                    }
                }

                if(a[j]=='R')
                {
                    if(a[j-1]=='?')
                    {
                        a[j-1]='B';
                    }
                }


        }



      for(int j=0;j<n;j++)
        {
                if(a[j+1]=='?')
                {
                    if(a[j]=='R')
                    {
                        a[j+1]='B';
                    }
                    else
                    {
                        a[j+1]='R';
                    }
                }
        }

        for(int j=n-1;j>=0;j--)
        {

                if(a[j]=='B')
                {
                    if(a[j-1]=='?')
                    {
                        a[j-1]='R';
                    }
                }

                if(a[j]=='R')
                {
                    if(a[j-1]=='?')
                    {
                        a[j-1]='B';
                    }
                }


        }

        if(n>1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<a[i];
            }
        }
        else if(a[0]=='?')
        {
            cout<<'B';
        }
        else
            cout<<a[0];


        cout<<endl;

    }
}
