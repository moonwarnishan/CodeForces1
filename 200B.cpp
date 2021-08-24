#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float ans=1, sum=0,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>j;
        sum+=j;
    }
    cout<<sum/n<<endl;
}
