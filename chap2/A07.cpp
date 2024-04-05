#include <bits/extc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,m,n) for(int i=(int)m;i<(int)n;i++)
#define fore(x,a) for (auto &x:a)
#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define ll long long

int main() {
  int d, n;
  cin >> d >> n;
  vi l(n) , r(n);
  rep(i, n) cin >> l[i] >> r[i];
  rep(i, n) l[i]--, r[i]--;

  vi day(d, 0);
  rep (i, n) {
    day[l[i]]++;
    day[r[i] + 1]--;
  }
  
  vi sum(d, 0);
  sum[0] = day[0];
  repp(i, 1, d){
    sum[i] = sum[i - 1] + day[i];
  }

   rep(i, d) cout << sum[i] << endl;
  return 0;
}
