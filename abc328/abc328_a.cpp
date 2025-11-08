#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, x;
  cin >> n >> x;

  vector<int> s(n);
  for (int i = 0; i < n; ++i) {
    cin >> s[i];
  }

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] <= x) {
      ans += s[i];
    }
  }

  cout << ans << endl;

  return 0;
}