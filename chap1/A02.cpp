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
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  bool ch = false;
  rep(i, n) if (a[i] == x) ch = true;
  if(ch) puts("Yes");
  else puts("No");
}
