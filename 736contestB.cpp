#include <bits/stdc++.h>
using namespace std;
string a,b;int n,V[200005],v,A;
int main(){
    int t;cin>>t;
    while(t--){
        ++v;cin>>n>>a>>b;A=0;
        for(int i = 0 ; i < n ; ++i){
            if(b[i] == '0'){
                continue;
            }
            else if(a[i] != '1'){
                A++;
                continue;
            }
            if(i-1>= 0 && a[i - 1]!= '0' && V[i - 1] != v ){
                V[i - 1] = v;
                A++;
                continue;
            }
            else if(i + 1 < n &&a[i + 1] != '0' && V[i + 1] != v ){
                V[i + 1] = v;
                A++;
            }
        }cout<<A<<endl;
    }
}
