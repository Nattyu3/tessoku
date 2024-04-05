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

int search(vi a, int x) {
  int l = 0, r = a.size() - 1;
  while (l <= r) {
    int m = (r + l) / 2;
    if (x > a[m]) l = m + 1;
    else if (x == a[m]) return m;
    else r = m - 1;
  }
  return -1;
}

int main() {
  int n, x;
  cin >> n >> x;
  vi a(n);
  rep(i, n) cin >> a[i];

  cout << search(a, x) + 1 << endl;
  return 0;
}
