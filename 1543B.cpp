#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int i,j,k;
        cin>>j;
        int arr[j];
        long long sum=0;
        for(i=0;i<j;i++)
        {
            cin>>k;
            arr[i]=k;
            sum+=arr[i];
        }
        long long int m=sum%j;
        long long int an=m*(j-m);
        cout<<an<<endl;


    }

    return 0;
}
