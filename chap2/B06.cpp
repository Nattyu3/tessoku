#include <bits/extc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define repp(i, m, n) for (int i = (int)m; i < (int)n; i++)
#define fore(x, a) for (auto &x : a)
#define rall(x) (x).rbegin(), (x).rend()
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define ll long long

int main() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  int q;
  cin >> q;
  vi l(q), r(q);
  rep(i, q) cin >> l[i] >> r[i];

  vi sum(n + 1, 0);
  repp(i, 1, n + 1) {
    sum[i] += sum[i - 1];
    if (a[i - 1] == 1) sum[i]++;
    else sum[i]--;
  }

  rep(i, q) {
    int tmp = sum[r[i]] - sum[l[i] - 1];
    if (tmp > 0) puts("win");
    else if (tmp < 0) puts("lose");
    else puts("draw");
  }
  return 0;
}
