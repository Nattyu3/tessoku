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
  int n, x = 1000;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  rep(i, n) repp(j, i + 1, n) repp(k, j + 1, n) if(x == a[i] + a[j] + a[k]){
    puts("Yes");
    return 0;
  }
  puts("No");
}
