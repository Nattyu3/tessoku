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

const int h = 1501, w = 1501;

int main() {
  int n;
  cin >> n;

  vector<vi> pap(h, vi(w, 0));
  rep(i, n) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    pap[a][b]++;
    pap[a][d]--;
    pap[c][b]--;
    pap[c][d]++;
  }
  
  vector<vi> sum(h + 1, vi(w + 1, 0));
  repp(i, 1, h + 1) repp(j, 1, w + 1) {
    sum[i][j] = sum[i][j - 1] + pap[i - 1][j - 1];
  }
  repp(j, 1, w + 1) repp(i, 1, h + 1) {
    sum[i][j] += sum[i - 1][j];
  }

  int ans = 0;
  rep(i, h + 1) rep(j, w + 1) {
    if (sum[i][j] > 0) ans++;
  }
  cout << ans << endl;
  return 0;
}
