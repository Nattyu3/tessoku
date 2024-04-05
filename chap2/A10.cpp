#include <bits/extc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define repp(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define rep(i,n) repp(i,0,n)
#define fore(x,a) for (auto &x:a)
#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define ll long long

int main() {
  int n; cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  int d; cin >> d;
  vi l(d), r(d);
  rep(i, d) {
    cin >> l[i] >> r[i];
    l[i]--, r[i]--;
  }

  vi p(n, a[0]);
  repp(i, 1, n) p[i] = max(p[i - 1], a[i]);
  reverse(all(a));
  vi q(n, a[0]);
  repp(i, 1, n) q[i] = max(q[i - 1], a[i]);
  reverse(all(q));

  rep(i, d) {
    cout << max(p[l[i] - 1], q[r[i] + 1]) << endl;
  }
  return 0;
}
