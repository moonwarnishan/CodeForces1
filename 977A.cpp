#include<iostream>
using namespace std;
int main()
{
    long long int i,j,k;
    cin>>i>>j;
    for(k=0;k<j;k++){
        if(i%10!=0){
            i=i-1;
        }
        else
            i=i/10;
    }
    cout<<i<<endl;
}
