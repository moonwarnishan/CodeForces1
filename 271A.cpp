#include<iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    while(true)
    {
        i+=1;
        int a = i / 1000;
        int b = i / 100 % 10;
        int c = i / 10 % 10;
        int d = i % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << i << endl;
}
