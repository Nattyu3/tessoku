#include <bits/extc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define fore(x,a) for (auto &x:a)
#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define ll long long

int main() {
  int t, n;
  cin >> t >> n;
  vi l(n), r(n);
  rep(i, n) cin >> l[i] >> r[i];

  vi ti(t, 0);
  rep(i, n) {
    ti[l[i]]++;
    ti[r[i]]--;
  }
  vi sum(t, 0);
  sum[0] = ti[0];
  repp(i, 1, t) sum[i] = sum[i - 1] + ti[i];

  rep(i, t) cout << sum[i] << endl;
  return 0;
}
