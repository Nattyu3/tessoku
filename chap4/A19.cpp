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
  int N, W;
  cin >> N >> W;
  vi w(N), v(N);
  rep(i, N) cin >> w[i] >> v[i];

  vector<vi> dp(N+1, vi(W+1, -1));
  dp[0][0] = 0;
  repp(i, 1, N + 1) {
    repp(j, 0, W + 1) {
      if (j < w[i-1]) dp[i][j] = dp[i-1][j];
      else dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i-1]] + v[i-1]);
    }
  }

  int ans = -1;
  rep(j, W + 1) ans = max(ans, dp[N][j]);
  cout << ans << endl;
  return 0;
}