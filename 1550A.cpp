#include<iostream>
using namespace std;
int main()
{
    int j;
    cin>>j;
    while(j--)
    {
        int cnt=0,sum=0,i=1,n;
        cin>>n;
        while(sum<n)
        {
            cnt++;
            sum+=i;
            i+=2;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
