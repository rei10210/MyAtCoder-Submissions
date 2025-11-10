#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  string s;
  cin >> s;

  int ans = 0;
  for (int i = 0; i < (int)s.size(); ++i) {
    if (s[i] == '+') ++ans;
    else --ans;
  }
  cout << ans << endl;

  return 0;
}