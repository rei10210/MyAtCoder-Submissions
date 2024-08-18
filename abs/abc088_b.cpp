/**
*    author:  rei10210
*    created: 2024.08.18 20:18:35
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<int> a(200);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end(), greater<int>());

  int alice = 0, bob = 0;

  for(int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      alice += a[i];
    }
    else bob += a[i];
  }
  int ans = alice - bob;
  cout << ans << endl;
}