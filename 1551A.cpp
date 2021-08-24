#include<iostream>
using namespace std;
int main()
{
    int one,i,j,tot,m;
    cin>>j;

    for(i=0;i<j;i++){
        cin>>tot;
        one=tot/3;
        if(tot%3==1)
        {
            cout<<one+1<<" "<<one<<endl;
        }
        else if(tot%3==2){
            cout<<one<<" "<<one+1<<endl;
        }
        else
            cout<<one<<" "<<one<<endl;


    }

    return 0;
}
