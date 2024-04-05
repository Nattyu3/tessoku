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

bool isprime(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;

  vector<bool> primes(n+1, true);
  primes[0] = false, primes[1] = false;
  for (int i = 2; i*i <= n; i++) {
    if (!primes[i]) continue;
    for (int j = i*2; j <= n; j += i) primes[j] = false;
  }

  repp(i, 2, n+1) if (primes[i]) cout << i << endl;
  return 0;
}
