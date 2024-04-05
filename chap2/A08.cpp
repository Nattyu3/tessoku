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
  int h, w;
  cin >> h >> w;
  vector<vi> x(h, vi(w));
  rep(i, h) rep(j, w) cin >> x[i][j];

  vector<vi> sum(h + 1, vi(w + 1, 0));
  repp(i, 1, h + 1) repp(j, 1, w + 1) {
    sum[i][j] = sum[i][j - 1] + x[i - 1][j - 1];
  }
  repp(j, 1, w + 1) repp(i, 1, h + 1)  {
    sum[i][j] += sum[i - 1][j];
  }

  int q;
  cin >> q;
  rep(i, q) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = sum[c][d] + sum[a - 1][b - 1] - sum[a - 1][d] - sum[c][b - 1];
    cout << ans << endl;
  }
  return 0;
}
