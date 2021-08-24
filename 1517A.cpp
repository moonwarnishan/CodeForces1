#include <iostream>

using namespace std;



int main()
{
    int t;
    cin>>t;
    while (t--) {
        long long n, ans = -1;
        cin>>n;
        if (n % 2050 == 0) {
            ans = 0;
            n =n/ 2050;
            while (n) {
                ans =ans+(n % 10);
                n =n/ 10;
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}
