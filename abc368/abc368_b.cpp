/**
*    author:  rei10210
*    created: 2024.08.24 21:16:09
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
  int flag = 0;
  while(true) {
    sort(a.begin(), a.end(), greater<int>());
    a[0]--;
    a[1]--;
    flag = 0;
    for(int i = 0; i < n; i++) {
      if(a[i] != 0) flag++;
    }
    if(flag > 1) cnt++;
    else break;
  }
  cout << cnt + 1 << endl;
}