#include <bits/extc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  stack<int> st;
  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] == '(') st.push(i + 1);
    if (s[i] == ')') {
      printf("%d %d\n", st.top(), i + 1);
      st.pop();
    }
  }
  return 0;
}
