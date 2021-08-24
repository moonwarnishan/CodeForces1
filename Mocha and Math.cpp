#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define all(x) (x).begin(), (x).end()
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;

void solve()
{
  ll n;
  cin>>n;
  vll v(n);
  for(ll i=0;i<n;i++)
  cin>>v[i];
  ll ans=1e9;
  for(ll i=0;i<n;i++){
    for(ll j=i;j<n;j++){
      for(ll k=0;k<=j-i;k++){
        v[i+k]=(v[i+k]&v[j-k]);
      }
      ll x=*max_element(all(v));
      ans=min(ans,x);
    }
  }
  cout<<ans<<endl;
}

int main()
{
  fast;
  ll t=1;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
