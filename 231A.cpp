#include<iostream>
using namespace std;
int main()
{
    int t,cnt=0;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
