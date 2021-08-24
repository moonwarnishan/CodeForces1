#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,k,l,cnt=0;
    cin>>n;
    cin>>i;
    int arr1[999];
    for(m=0;m<i;m++)
    {
        cin>>arr1[m];
    }
    cin>>j;
    for(k=i;k<i+j;k++)
    {
        cin>>arr1[k];
    }
    sort(arr1,arr1+(i+j));


    for(m=0;m<i+j;m++)
    {
        if(arr1[m]!=arr1[m+1])
        {
            cnt++;
        }
    }
    if(cnt==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
        cout<<"Oh, my keyboard!"<<endl;

}
