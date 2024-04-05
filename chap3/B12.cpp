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

double f(double &x) {
  return x * x * x + x;
}

int main() {
  double n;
  cin >> n;

  double l = 0., r = 100.;
  repp(i, 0, 30) {
    double m = (l + r) / 2;
    if (f(m) > n) r = m;
    else l = m;
  }

  cout << fixed << setprecision(5);
  cout << l << endl;
  return 0;
}
