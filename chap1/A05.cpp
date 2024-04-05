#include <bits/extc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define repp(i, m, n) for (int i = (int)m; i < (int)n; i++)
#define fore(x, a) for (auto &x : a)
#define rall(x) (x).rbegin(), (x).rend()
#define all(x) (x).begin(), (x).end()
#define ll long long

int main() {
  int n, k;
  cin >> n >> k;

  int ans = 0;
  repp(i, 1, n + 1) repp(j, 1, n + 1) if(0 < k - (i + j) && k - (i + j) <= n) ans++;

  cout << ans << endl;
}
