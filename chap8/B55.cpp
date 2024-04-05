#include <bits/extc++.h>
using namespace std;
typedef long long ll;

int main() {
  int q;
  cin >> q;

  set<ll> se1, se2;
  while (q--) {
    ll a, b;
    cin >> a >> b;
    if (a == 1) {
      se1.insert(b);
      se2.insert(-b);
    }
    else {
      ll v1;
      auto itr1 = se1.lower_bound(b);
      if (itr1 == se1.end()) v1 = LONG_LONG_MAX;
      else v1 = *itr1;

      ll v2;
      auto itr2 = se2.lower_bound(-b);
      if (itr2 == se2.end()) v2 = LONG_LONG_MIN;
      else v2 = -*itr2;

      ll ans = min(abs(v1 - b), abs(b - v2));
      if (ans > 1e9) ans = -1;
      cout << ans << endl;
    }
  }
  return 0;
}
