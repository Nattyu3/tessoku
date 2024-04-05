#include <bits/extc++.h>
#include <atcoder/all>
#define int long long
#define repp(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define rep(i,n) repp(i,0,n)
#define fore(x,a) for (auto &x:a)
#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
using namespace atcoder;
using namespace std;

signed main() {
  int n, k;
  cin >> n >> k;
  vi a(n);
  rep(i, n) cin >> a[i];

  vi r(n - 1, 0);
  rep(i, n - 1) {
    if (i != 0) r[i] = r[i - 1];
    while (r[i] < n - 1 && a[r[i] + 1] - a[i] <= k) {
      r[i]++;
    }
  }

  int ans = 0;
  rep(i, n - 1) ans += r[i] - i;
  cout << ans << endl;
  return 0;
}
