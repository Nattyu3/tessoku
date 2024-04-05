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
  vi a(n);
  rep(i, n) cin >> a[i];

  set<int> se;
  rep(i, n) se.insert(a[i]);

  vi vec;
  fore(x, se) vec.push_back(x);
  
  rep(i, n) {
    a[i] = lower_bound(all(vec), a[i]) - vec.begin() + 1;
    cout << a[i] << " \n"[i == n - 1];
  }
  return 0;
}
