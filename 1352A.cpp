#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int i,j,k,cnt=0,x[4];
        cin>>j;
        x[0]=j%10;
        x[1]=(j-x[0])%100;
        x[2]=(j-(x[1]+x[0]))%1000;
        x[3]=(j-(x[2]+x[1]+x[0]))%10000;
        x[4]=(j-(x[3]+x[2]+x[1]+x[0]))%100000;
        for(i=0;i<=4;i++)
        {
            if(x[i]>0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        for(i=4;i>=0;i--)
        {

            if(x[i]>0)
            {
                cout<<x[i]<<" ";
            }
        }

        cout<<endl;
    }
}
