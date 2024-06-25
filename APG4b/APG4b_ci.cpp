/**
*    author:  rei10210
*    created: 2024.06.26 00:51:59
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = max(max(a, b), c) - min(min(a, b), c);

  cout << ans << endl;
}