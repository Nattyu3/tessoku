#include <bits/extc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define repp(i, m, n) for(int i = (int)m; i < (int)n; i++)
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define fore(x, a) for (auto &x : a)
#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef long long ll;

int main() {
  int n;
  string s;
  cin >> n >> s;

  vector<vi> dp(n, vi(n, 0));

  int ans = 0;

  cout << ans << endl;
  return 0;
}
