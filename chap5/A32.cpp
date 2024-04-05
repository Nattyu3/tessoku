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
  int n, a, b;
  cin >> n >> a >> b;

  vector<bool> dp(n + 1, false);
  rep(i, n + 1) {
    if (i >= a && !(dp[i-a])) dp[i] = true;
    else if (i >= b && !(dp[i-b])) dp[i] = true;
  }

  if (dp[n]) puts("First");
  else puts("Second");
  return 0;
}
