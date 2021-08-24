#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int sum=0,i,j,k;
        cin>>j;
        int arr[j];
        for(i=0;i<j;i++){
            cin>>k;
            arr[i]=k;
            sum+=arr[i];
        }
        if(sum<j){
            cout<<"1"<<endl;
        }
        else
        {
            cout<<sum-j<<endl;
        }


    }


    return 0;
}
