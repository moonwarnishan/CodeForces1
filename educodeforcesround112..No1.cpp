#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n,i;
        cin>>n;

        if(n<=6)
        {
            i=15;
        }
        /*
        else
        {
            if(n%2!=0)n++;
                i=(n*5)/2;
        }
*/
        else
        {
            if(n%2==0){
                i=(n/2)*5;
            }
            else
                i=((n/2)+1)*5;
        }
        cout<<i<<endl;



    }
}
