#include <bits/extc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  stack<string> sta;
  while (q--) {
    int x;
    cin >> x;
    if (x == 1) {
      string s;
      cin >> s;
      sta.push(s);
    }
    if (x == 2) {
      cout << sta.top() << endl;
    }
    if (x == 3) {
      sta.pop();
    }
  }
  return 0;
}
