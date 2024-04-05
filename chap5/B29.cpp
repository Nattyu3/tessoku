#include <bits/extc++.h>
#include <atcoder/all>
#define repp(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define rep(i,n) repp(i,0,n)
#define fore(x,a) for (auto &x:a)
#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define ll long long
using namespace atcoder;
using namespace std;

const ll mod = 1e9+7;

ll power(ll a, ll b) {
  ll p = a, ans = 1;
  for (int i = 0; i < 60; i++) {
    ll wari = (1LL << i);
    if ((b / wari) % 2 == 1) {
      ans = (ans%mod) * (p%mod);
      ans %= mod;
    }
    p = (p * p) % mod;
  }
  return ans;
}

int main() {
  ll a, b;
  cin >> a >> b;

  cout << power(a, b) << endl;
  return 0;
}
