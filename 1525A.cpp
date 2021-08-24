#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int i;
        cin>>i;
        int gcd=__gcd(i,100);
        cout<<100/gcd<<endl;
    }


    return 0;
}
