#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,i;
    cin>>n>>h;
    int tot=0;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>h){
            tot+=2;
        }
        else
            tot++;
    }
    cout<<tot<<endl;
}
