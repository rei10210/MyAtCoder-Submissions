#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, y;
  cin >> x >> y;
  int z = x - y;
  if ((z < 0 && z >= -2) || (z > 0 && z <= 3)) {
    cout << "Yes\n";
  }
  else {
    cout << "No\n";
  }

  return 0;
}