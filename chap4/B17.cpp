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
  int n;
  cin >> n;
  vi h(n);
  rep(i, n) cin >> h[i];

  vi dp(n);
  dp[0] = 0; dp[1] = abs(h[1] - h[0]);
  repp(i, 2, n) {
    dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
  }

  vi ans;
  int p = n - 1;
  while (true) {
    ans.push_back(p);
    if (p == 0) break;
    if (dp[p] == dp[p - 1] + abs(h[p] - h[p - 1])) p--;
    else p -= 2;
  }
  reverse(all(ans));

  cout << ans.size() << endl;
  rep(i, ans.size()) cout << ans[i] + 1 << " \n"[i == ans.size() - 1];
  return 0;
}
