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
  int n;
  cin >> n;

  string ans = "";
  while (n > 0) {
    ans += char(n % 2 + (int)'0');
    n /= 2;
  }
  int len = ans.size();
  rep(i, 10 - len) {
    ans.push_back('0');
  }

  reverse(all(ans));
  cout << ans << endl;
}
