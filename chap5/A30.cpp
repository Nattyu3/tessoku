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

ll powe(ll a, ll b) {
  ll p = a, ans = 1;
  for (int i = 0; i < 30; i++) {
    int wari = (1 << i);
    if ((b/wari) % 2 == 1) ans = (ans * p) % mod;
    p = (p * p) % mod;
  }
  return ans;
}

ll divi(ll a, ll b) {
  return (a * powe(b, mod - 2)) % mod;
}

int main() {
  ll n, r;
  cin >> n >> r;

  ll a = 1;
  for (int i = 1; i <= n; i++) a = (a * i) % mod;

  ll b = 1;
  for (int i = 1; i <= r; i++) b = (b * i) % mod;
  for (int i = 1; i <= n - r; i++) b = (b * i) % mod;

  cout << divi(a, b) << endl;
  return 0;
}
