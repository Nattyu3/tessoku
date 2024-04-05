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

bool check(vector<ll> &a, ll &x, ll &k) {
  ll res = 0;
  rep(i, a.size()) res += x / a[i];
  if (res >= k) return true;
  else return false;
}

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll l = 1, r = 1e+9;
  while (l < r) {
    ll m = (l + r) / 2;
    if (!check(a, m, k)) l = m + 1;
    else r = m;
  }

  cout << l << endl;
  return 0;
}
