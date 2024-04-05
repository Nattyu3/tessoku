#include <bits/extc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
typedef long long ll;

ll nc2(ll &n) {
  if (n % 2 == 0) return n / 2 * (n - 1);
  else return (n - 1) / 2 * n;
}

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  map<ll, ll> mp;
  rep(i, n) mp[a[i]]++;

  ll ans = 0;
  for (auto &[x, y] : mp) ans += nc2(y);

  cout << ans << endl;
  return 0;
}
