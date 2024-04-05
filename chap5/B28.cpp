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

const int mod = 1e9+7;

int main() {
  int n;
  cin >> n;

  vector<ll> fib(n+1);
  fib[0] = 0, fib[1] = 1;
  repp(i, 2, n+1) {
    fib[i] = (fib[i-1]%mod) + (fib[i-2]%mod);
    fib[i] %= mod;
  }

  cout << fib[n] << endl;
  return 0;
}
