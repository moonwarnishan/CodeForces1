#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int value, int len)
{
    int low=0;
    int high =len-1;
    int mid;

    while(low<=high)
    {
        mid=(high+low)/2;

        if(value==arr[mid])
        {
            return mid;
        }
        else if(value>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;


}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int i;
    cin>>i;
    int len=sizeof(arr)/sizeof(arr[0]);
    int result=BinarySearch(arr,i,len);
    cout<<"The index of "<<i<<" is: "<<result<<endl;


}
