#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int s, a, b, x;
  cin >> s >> a >> b >> x;

  int ans = 0;
  int p = x % (a + b); //余り
  int q = x / (a + b); //商（ループ回数）

  if (q == 0) {
    ans = s * min(p, a);
  }
  else if (p == 0) {
    ans = s * a * q;
  }
  else if (p <= a) {
    ans = (s * a * q) + s * p;
  }
  else {
    ans = (s * a * q) + s * a;
  }

  cout << ans << endl;

  return 0;
}