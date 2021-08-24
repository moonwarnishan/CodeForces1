#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[]={1,2,1,2,1,1,3,4,5,5,4,3,2};
   int n = sizeof(arr)/sizeof(arr[0]);
   int i,fr[9999],cnt=0;
   for(i=0;i<n;i++)
   {
        if(fr[arr[i]]==0)
        {
            cnt++;
            fr[arr[i]]++;
        }
    cout<<cnt<<endl;
   }

}
