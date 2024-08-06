/**
*    author:  rei10210
*    created: 2024.08.06 14:33:06
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() { 
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int ans = 0;
  for (int i = 0; i <= a; i++) {
    for (int j = 0; j <= b; j++) {
      for (int k = 0; k <= c; k++) {
        int price = 500*i + 100*j + 50*k;
        if (price == x) ans++;
      }
    }
  }
  cout << ans << endl;
}