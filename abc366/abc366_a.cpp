/**
*    author:  rei10210
*    created: 2024.08.10 21:01:19
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, t, a;
  cin >> n >> t >> a;
  int remain = n - (t + a);
  //cout << remain << endl;
  int diff;
  if (t - a >= 0) diff = t - a;
  else diff = a - t;
  //cout << diff << endl;
  if (diff > remain) cout << "Yes" << endl;
  else cout << "No" << endl;
}