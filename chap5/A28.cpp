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

  int ans = 0;
  rep(i, n) {
    char t;
    int a;
    cin >> t >> a;

    if (t == '+') ans += a;
    if (t == '*') ans *= a;
    if (t == '-') ans -= a;
    ans %= 10000;
    if (ans < 0) ans += 10000;
    cout << ans << endl;
  }
  return 0;
}
