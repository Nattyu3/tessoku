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
  string n;
  cin >> n;

  int ans = 0;
  rep (i, n.size()) {
    ans += pow(2, i) * (int)(n[n.size() - i - 1] - '0');
  }

  cout << ans << endl;
}
