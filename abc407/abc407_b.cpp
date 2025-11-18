#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int x, y;
  cin >> x >> y;

  int a[7], b[7];
  for (int i = 1; i < 7; ++i) {
    a[i] = i;
    b[i] = i;
  }

  int ans = 0;
  for (int i = 1; i < 7; ++i) {
    for (int j = 1; j < 7; ++j) {
      if (a[i] + b[j] >= x || abs(a[i] - b[j]) >= y) {
        ans++;
      }
    }
  }

  cout << setprecision(30) << double(ans) / 36 << endl;
  
  return 0;
}