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
  ll N, W;
  cin >> N >> W;
  vector<ll> w(N), v(N);
  rep(i, N) cin >> w[i] >> v[i];

  ll sum = 0;
  rep(i, N) sum += v[i];

  vector<vector<ll> > dp(N+1, vector<ll>(sum+1, W+1));
  dp[0][0] = 0;
  repp(i, 1, N + 1) {
    repp(j, 0, sum+1) {
      if (j < v[i-1]) dp[i][j] = dp[i-1][j];
      else dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i-1]] + w[i-1]);
    }
  }

  // rep(i, N+1) rep(j, sum+1) cout << dp[i][j] << " \n"[j == sum];

  ll ans = 0;
  rep(j, sum+1) if (dp[N][j] <= W) ans = j;
  cout << ans << endl;
  return 0;
}
