#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,arr[5][5],cnt;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                cnt=abs((i-2))+abs((j-2));
            }
        }
    }
    cout<<cnt<<endl;
}
