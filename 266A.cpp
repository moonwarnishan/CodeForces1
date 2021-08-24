#include<iostream>
using namespace std;
int main()
{
    int i,j,cnt=0;
    cin>>i;
    char x[i];
    for(j=0;j<i;j++){
        cin>>x[j];
    }
    for(j=0;j<i;j++){
        if(x[j]==x[j+1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
