#include<iostream>
using namespace std;
int main()
{
    int i,j,m;
    string k;

    cin>>j;
    for(i=0;i<j;i++)
    {
        int temp=0;
        cin>>k;
        for(m=0;m<=k.size();m++)
        {

            if(k[m]>temp)
            {
                temp=k[m];
            }
        }
        cout<<temp-48<<endl;
    }


    return 0;
}
