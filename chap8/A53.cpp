#include <bits/extc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;

  priority_queue<int, vector<int>, greater<int>> pq;
  while (q--) {
    int x;
    cin >> x;
    if (x == 1) {
      int a;
      cin >> a;
      pq.push(a);
    }
    if (x == 2) {
      cout << pq.top() << endl;
    }
    if (x == 3) {
      pq.pop();
    }
  }
}
