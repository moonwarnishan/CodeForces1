#include<iostream>
using namespace std;
int main()
{
    long long int s,cnt=0;
    cin>>s;
    int arr[]={100,20,10,5,1};
    for(int i=0;i<5;i++)
    {
        cnt+=s/arr[i];
        s=s%arr[i];
    }
    cout<<cnt<<endl;
}
