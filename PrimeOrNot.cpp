#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,flag=0;;
    cin>>i;
    for(int j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
        {
            flag=1;
        }
    }
    if(flag>0)
    {
        cout<<"Not Prime"<<endl;
    }
    else
        cout<<"Prime"<<endl;

}
