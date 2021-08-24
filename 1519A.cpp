#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int x;
        if(c==0)
        {
            if(a==b)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        else{
          long long int aa=max(a,b);
          long long int bb=min(a,b);
           c++;
           x=bb*c;
           if(x>=aa)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
        }
    }
    return 0;
}
