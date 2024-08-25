/**
*    author:  rei10210
*    created: 2024.08.24 20:59:46
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(200);
  vector<int> b(200);
  rep(i, n) cin >> a[i];
  for(int i = 0; i < k; i++) {
    b[i] = a[n-k+i];
  }
  for(int i = 0; i < n - k; i++) {
    b[k+i] = a[i];
  }
  for(int i = 0; i < n; i++) {
    cout << b[i] << " ";
  }
  cout << endl;
}