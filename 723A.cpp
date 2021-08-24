#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,mx,mn;
    cin>>x>>y>>z;
    if(x>=y&&x>=z){
        mx=x;
    }
    else if(y>=x && y>=z)
    {
        mx=y;
    }
    else
    {
        mx=z;
    }


    if(x<=y&&x<=z){
        mn=x;
    }
    else if(y<=x && y<=z)
    {
        mn=y;
    }
    else
    {
        mn=z;
    }

    cout<<mx-mn<<endl;

}
