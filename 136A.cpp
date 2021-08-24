#include <iostream>
using namespace std;
int n, b, arr[105];
int main() {

    cin >> n;
    for (int i = 1; i <=n; i++) {
        cin >> b;
        arr[b] = i;
    }
    for (int i = 1; i <=n; i++) {
        cout <<arr[i] << " ";
    }
}
