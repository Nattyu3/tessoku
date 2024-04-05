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

vi summ(vi a) {
  vi res;
  rep(i, 1 << a.size()) {
    int sum = 0;
    rep(j, a.size()) {
      if ((i / (1 << j)) % 2 == 1) sum += a[j];
    }
    res.push_back(sum);
  }
  return res;
}

signed main() {
  int n, k;
  cin >> n >> k;
  vi a(n);
  rep(i, n) cin >> a[i];

  vi a1, a2;
  repp(i, 0, n / 2) a1.push_back(a[i]);
  repp(i, n / 2, n) a2.push_back(a[i]);

  vi p = summ(a1); sort(all(p));
  vi q = summ(a2); sort(all(q));

  rep(i, p.size()) {
    auto up = upper_bound(all(q), k - p[i]);
    auto lo = lower_bound(all(q), k - p[i]);
    if (up - lo) {
      puts("Yes");
      return 0;
    }
  }
  puts("No");
  return 0;
}
