#include <bits/extc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define fore(x, a) for (auto &x : a)
typedef long long ll;

int main() {
  ll n, d;
  cin >> n >> d;
  vector<ll> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  rep(i, n) x[i]--;

  vector<vector<ll>> job(d);
  rep(i, n) job[x[i]].push_back(y[i]);

  ll ans = 0;
  priority_queue<ll> pq;
  rep(i, d) {
    fore(a, job[i]) pq.push(a);
    if (!pq.empty()) {
      ans += pq.top();
      pq.pop();
    }
  }

  cout << ans << endl;
  return 0;
}
