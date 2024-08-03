/**
*    author:  rei10210
*    created: 2024.08.03 20:59:45
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int y, ans;
  cin >> y;
  if(y % 4 != 0) ans = 365;
  else if(y % 4 == 0 && y % 100 != 0) ans = 366;
  else if(y % 100 == 0 && y % 400 != 0) ans = 365;
  else if(y % 400 == 0) ans = 366;

  cout << ans << endl;
}