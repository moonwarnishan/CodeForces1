#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int j,i;
        cin>>j;
        long long int mult=1,arr[j],k;

        for(i=0;i<j;i++)
        {
            cin>>k;
            arr[i]=k;
        }

        long long int arr2[j-1];

        for(i=0;i<j-1;i++){
                mult=arr[i]*arr[i+1];
                arr2[i]=mult;
        }

        long long int largest=arr[0];
        for(i=0;i<sizeof(arr2)/sizeof(arr2[0]);i++){
            if(arr2[i]>largest){
                largest=arr2[i];
            }
        }

        cout<<largest<<endl;

    }
}
