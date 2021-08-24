#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,one,two;
    cin>>j;

    for(i=0;i<j;i++){
        cin>>k;
        int even=0, odd=0;
        for(l=0;l<k;l++){
            cin>>one>>two;
            if(one%2==0){
                even++;
            }
            else{
                odd++;
            }
            if(two%2==0){
                even++;
            }
            else{
                odd++;
            }

        }
        if(even==odd){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
}
