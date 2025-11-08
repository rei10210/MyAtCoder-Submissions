#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  string s;
  cin >> n;
  cin >> s;
  for (int i = 0; i < n - 1; ++i) {
    if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a')) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}