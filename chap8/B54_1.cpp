#include <bits/extc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll ans = 0;
  map<ll, ll> mp;
  rep(i, n) {
    ans += mp[a[i]];
    mp[a[i]]++;
  }

  cout << ans << endl;
  return 0;
}
