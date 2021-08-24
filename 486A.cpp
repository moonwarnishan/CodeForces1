#include<iostream>
using namespace std;
int main()
{
    long long int s, i,j,neg=0,pos=0;
    cin>>s;

    if(s%2==0)
    {
        cout<<s/2<<endl;
    }
    else
        cout<<-((s+1)/2)<<endl;

}
