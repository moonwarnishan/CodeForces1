#include<iostream>
using namespace std;
int main()
{
    int i,j,k,ans=0;
    cin>>i;
    for(j=5;j>0;j--){
        ans=ans+(i/j);
        i=i%j;
    }
    cout<<ans<<endl;
}
