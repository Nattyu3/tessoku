#include <bits/extc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define repp(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define rep(i,n) repp(i,0,n)
#define fore(x,a) for (auto &x:a)
#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define ll long long

int main() {
  int h, w, n;
  cin >> h >> w >> n;

  vector<vi> fal(h + 1, vi(w + 1, 0));
  rep(k, n) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a--, b--, c--, d--;
    fal[a][b]++;
    fal[a][d + 1]--;
    fal[c + 1][b]--;
    fal[c + 1][d + 1]++;
  }

  vector<vi> ans(h + 1, vi(w + 1, 0));
  repp(i, 1, h + 1) repp(j, 1, w + 1) {
    ans[i][j] = ans[i][j - 1] + fal[i - 1][j - 1];
  }
  repp(j, 1, w + 1) repp(i, 1, h + 1) {
    ans[i][j] += ans[i - 1][j];
  }

  repp(i, 1, h + 1) repp(j, 1, w + 1) {
    cout << ans[i][j] << " \n"[j == w];
  }
  return 0;

}
