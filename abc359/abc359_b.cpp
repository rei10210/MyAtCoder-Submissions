#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  vector<int> v(1000);
  cin >> n;
  rep(i, 2*n) cin >> v[i];
  int ans = 0;
  rep(i, 2*n) {
    if (v[i] == v[i+2]) {
      ans++;
    }
  }
  cout << ans << endl;
}
