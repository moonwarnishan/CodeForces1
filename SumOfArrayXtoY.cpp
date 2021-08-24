#include<bits/stdc++.h>
using namespace std;
int A2[1000];

void SumofA1(int A1[],int n)
{
    int i;
    A2[0]=A1[0];
    for(i=1;i<n;i++)
    {
        A2[i]=A2[i-1]+A1[i];
    }
}
int Sum(int x,int y)
{
    return A2[y]-A2[x-1];
}

int main()
{
    int A1[]={1,2,3,4,5,6,7};
    SumofA1(A1,7);
    cout<<Sum(1,5)<<endl;

}
