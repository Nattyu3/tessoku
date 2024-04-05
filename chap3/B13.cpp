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

  vi sum(n + 1, 0);
  repp(i, 1, n + 1) sum[i] = sum[i - 1] + a[i - 1];

  vi r(n, 0);
  repp(i, 0, n) {
    if (i != 0) r[i] = r[i - 1];
    while (r[i] < n && sum[r[i] + 1] - sum[i] <= k) r[i]++;
  }

  int ans = 0;
  rep(i, n) ans += r[i] - i;
  cout << ans << endl;
  return 0;
}
