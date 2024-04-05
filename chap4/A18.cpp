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
  int n, s;
  cin >> n >> s;
  vi a(n);
  rep(i, n) cin >> a[i];

  vector<vector<bool> > dp(n + 1, vector<bool>(s + 1, false));
  dp[0][0] = true;
  repp(i, 1, n + 1) {
    repp(j, 0, s + 1) {
      if (j < a[i-1]) {
        if (dp[i-1][j] == true) dp[i][j] = true;
      }
      else {
        if (dp[i-1][j] == true) dp[i][j] = true;
        else if (dp[i-1][j-a[i-1]] == true) dp[i][j] = true;
      }
    }
  }

  // rep(i, n + 1) rep(j, s + 1) cout << (dp[i][j]?"o":"x") << " \n"[j == s];
  if (dp[n][s]) puts("Yes");
  else puts("No");
  return 0;
}
