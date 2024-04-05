#include <bits/extc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;

  set<int> se;
  while (q--) {
    int a, b;
    cin >> a >> b;
    if (a == 1) se.insert(b);
    if (a == 2) se.erase(b);
    if (a == 3) {
      auto itr = se.lower_bound(b);
      if (itr == se.end()) cout << -1 << endl;
      else cout << *itr << endl;
    }
  }
  return 0;
}
