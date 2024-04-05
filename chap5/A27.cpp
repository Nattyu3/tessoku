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

int GCD(int &a, int &b) {
  while (a > 0 && b > 0) {
    if (a >= b) a %= b;
    else b %= a;
  }
  if (a != 0) return a;
  else return b;
}

int main() {
  int a, b;
  cin >> a >> b;

  cout << GCD(a, b) << endl;
  return 0;
}
