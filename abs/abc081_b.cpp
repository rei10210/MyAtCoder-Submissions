/**
*    author:  rei10210
*    created: 2024.08.06 14:21:33
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int cnt = 0;
  bool flag = true;
  while (flag) {
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 != 0) {
        flag = false;
        
      }
    }
    for (int i = 0; i < n; i++) {
      a[i] = a[i] / 2;
    }
    cnt++;
  }

  cout << cnt - 1 << endl;
}