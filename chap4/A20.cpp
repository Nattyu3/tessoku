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
  string s, t;
  cin >> s >> t;

  vector<vi> dp(s.size()+1, vi(t.size()+1, 0));
  repp(i, 1, s.size()+1) {
    repp(j, 1, t.size()+1) {
      if (s[i-1] == t[j-1]) dp[i][j] = max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1] + 1});
      else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    }
  }

  // rep(i, s.size()+1) rep(j, t.size()+1) cout << dp[i][j] << " \n"[j == t.size()];

  cout << dp[s.size()][t.size()] << endl;
  return 0;
}
