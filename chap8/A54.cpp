#include <bits/extc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;

  map<string, int> mp;
  while (q--) {
    int x;
    string s;
    cin >> x >> s;
    if (x == 1) {
      int a;
      cin >> a;
      mp[s] = a;
    }
    if (x == 2) {
      cout << mp[s] << endl;
    }
  }
  return 0;  
}
