#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,cnt=0;
    cin>>n;
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
    {
        cin>>arr1[i]>>arr2[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

}
