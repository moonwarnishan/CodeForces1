//NOT SOLVED

include<bits/stdc++.h>
using namespace std;
int main()
{
    string luck;
    cin>>luck;
    int x=luck.length(),s=0,s2=0,y;
    for(int i=0;i<x;i++)
    {
        if(luck[i]=='4'||luck[i]=='7')
        {
            s++;
        }
    }
    if(s==x)
    {
        cout<<"YES"<<endl;
    }
    else if(1%2==0 ||(int)x%4==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<< stringstream geek(x)<<endl;

}
