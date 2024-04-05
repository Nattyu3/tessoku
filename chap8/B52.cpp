#include <bits/extc++.h>
using namespace std;

int main() {
  int n, x;
  string s;
  cin >> n >> x >> s;

  queue<int> qu;
  qu.push(x-1);
  s[x-1] = '@';
  while (!qu.empty()) {
    int pos = qu.front();
    qu.pop();
    if (pos > 0 && s[pos-1] == '.') {
      s[pos-1] = '@';
      qu.push(pos-1);
    }
    if (pos < n - 1 && s[pos+1] == '.') {
      s[pos+1] = '@';
      qu.push(pos+1);
    }
  }

  cout << s << endl;
  return 0;
}
