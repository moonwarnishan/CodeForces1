#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int arr[4],arr2[4];
    int i;
    for(i=0;i<=3;i++)
    {
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    cout<<arr[3]-arr[1]<<" "<<arr[3]-arr[2]<<" "<<arr[3]-arr[0]<<endl;


}
