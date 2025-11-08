#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, l;
  cin >> n >> l;

  vector<int> A(n);
  for (int i = 0; i < n; ++i) {
    cin >> A[i];
  }

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    if (A[i] >= l) {
      ++ans;
    }
  }

  cout << ans << "\n";

  return 0;
}