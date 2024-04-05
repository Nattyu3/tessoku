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
  int n; cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];

  sort(all(a));
  int q; cin >> q;
  rep(k, q) {
    int x; cin >> x;
    cout << lower_bound(all(a), x) - a.begin() << endl;
  }
  return 0;
}
