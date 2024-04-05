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

  cout << dp[n - 1] << endl;
  return 0;
}
