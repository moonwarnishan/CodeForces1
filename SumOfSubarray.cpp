#include<bits/stdc++.h>
using namespace std;

int SumOfSub(int arr[],int n)
{
    int sum=0,ans=arr[1];
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>ans)
        {
            ans=sum;
        }
        if(sum<0)
            ans=0;
    }
    return ans;
}



int main()
{
     int a[]={1,2,3,1,-2,3,4,5,6};
     cout<<SumOfSub(a,9);
}
