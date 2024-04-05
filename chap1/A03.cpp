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
  vector<int> p(n), q(n);
  rep(i, n) cin >> p[i];
  rep(i, n) cin >> q[i];

  rep(i, n) rep(j, n) if(k == p[i] + q[j]){
    puts("Yes");
    return 0;
  }
  puts("No");
}
