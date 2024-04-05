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

int main() {
  int n, k;
  cin >> n >> k;
  vi a(n), b(n), c(n), d(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> c[i];
  rep(i, n) cin >> d[i];

  vi ab(n * n), cd(n * n);
  rep(i, n) rep(j, n) {
    ab[n * i + j] = a[i] + b[j];
    cd[n * i + j] = c[i] + d[j];
  }
  sort(all(cd));

  rep(i, ab.size()) {
    auto up = upper_bound(all(cd), k - ab[i]);
    auto lo = lower_bound(all(cd), k - ab[i]);
    if (up - lo) {
      puts("Yes");
      return 0;
    }
  }
  puts("No");
  return 0;
}
