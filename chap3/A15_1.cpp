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

  vector<pair<int, int> > vec(n);
  rep(i, n) vec[i].first = a[i], vec[i].second = i + 1;
  sort(all(vec));
  int tmp = vec[0].first;
  int t = 1;
  vec[0].first = t;
  repp(i, 1, n) {
    if (tmp != vec[i].first) t++;
    tmp = vec[i].first;
    vec[i].first = t;
  }
  rep(i, n) swap(vec[i].first, vec[i].second);
  sort(all(vec));

  rep(i, n) cout << vec[i].second << " \n"[i == n - 1];
  return 0;
}
