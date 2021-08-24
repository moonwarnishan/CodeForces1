#include<iostream>
using namespace std;
int main()
{
    int i,j,k,m;
    cin>>m;
    for(i=0;i<m;i++){
        cin>>k;
        if(k%10!=9){
            cout<<k/10<<endl;
        }
        else
            cout<<(k/10)+1<<endl;
    }

    return 0;
}
