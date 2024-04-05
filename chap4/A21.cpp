#include <bits/extc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
typedef vector<int> vi;

int main() {
  int n;
  cin >> n;
  vi p(n), a(n);
  rep(i, n) cin >> p[i] >> a[i];
  rep(i, n) p[i]--;

  vector<vi> dp(n, vi(n, 0));
  for (int le = n - 2; le >= 0; le--) {
    for (int l = 0; l < n - le; l++) {
      int r = l + le;

      int s1 = 0;
      if (l != 0) if (l <= p[l-1] && p[l-1] <= r) s1 = a[l-1];
      int s2 = 0;
      if (r != n - 1) if (l <= p[r+1] && p[r+1] <= r) s2 = a[r+1];

      if (l == 0) dp[l][r] = dp[l][r+1] + s2;
      else if (r == n - 1) dp[l][r] = dp[l-1][r] + s1;
      else dp[l][r] = max(dp[l][r+1] + s2, dp[l-1][r] + s1);
    }
  }

  int ans = -1;
  rep(i, n) ans = max(ans, dp[i][i]);
  // rep(i, n) rep(j, n) printf((j == n - 1 ? "%03d\n" : "%03d "), dp[i][j]);
  cout << ans << endl;
  return 0;
}
