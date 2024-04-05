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
  vi a(n), b(n);
  a[0] = 0, b[0] = 0, b[1] = 0;
  repp(i, 1, n) cin >> a[i];
  repp(i, 2, n) cin >> b[i];

  vi dp(n);
  dp[0] = 0, dp[1] = a[1];
  repp(i, 2, n) {
    dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
  }

  vi ans;
  int pla = n - 1;
  while (true) {
    ans.push_back(pla);
    if (pla == 0) break;
    if (dp[pla] == dp[pla - 1] + a[pla]) pla--;
    else pla -= 2;
  }
  reverse(all(ans));

  cout << ans.size() << endl;
  rep(i, ans.size()) cout << ans[i] + 1 << " \n"[i == ans.size() - 1];
  return 0;
}
