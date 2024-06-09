#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m, h;
  cin >> n >> m;
  int sum = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> h;
    sum += h;
    if (sum <= m) {
      ans++;
    }
    else {

    }
  }
  cout << ans << endl;
}
