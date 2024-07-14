/**
*    author:  rei10210
*    created: 2024.07.13 21:00:01
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int r, g, b;
  string c;
  cin >> r >> g >> b >> c;
  int ans = 0;
  if (c == "Red") ans = min(g, b);
  else if (c == "Green") ans = min(r, b);
  else ans = min(g, r);

  cout << ans << endl;
}