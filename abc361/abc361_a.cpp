/**
*    author:  rei10210
*    created: 2024.07.06 21:25:04
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> a(100);
  for (int i = 0; i < n; i++) cin >> a.at(i);

  for (int i = 0; i < k; i++) cout << a.at(i) << " ";

  cout << x << " ";

  for (int i = k; i < n; i++) cout << a.at(i) << " ";

  cout << endl;
}