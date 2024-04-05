#include <bits/extc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;

  queue<string> qu;
  while (q--) {
    int x;
    cin >> x;
    if (x == 1) {
      string s;
      cin >> s;
      qu.push(s);
    }
    if (x == 2) {
      cout << qu.front() << endl;
    }
    if (x == 3) {
      qu.pop();
    }
  }
  return 0;
}
