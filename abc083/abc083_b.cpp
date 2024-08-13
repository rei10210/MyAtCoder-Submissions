/**
*    author:  rei10210
*    created: 2024.08.06 18:09:26
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;

  for (int i = 1; i <= n; i++) {
    int x = i;
    int sum = 0;
    for (int j = 0; j < 5; j++) { //Nは高々10000までなので、10で割る操作を5回まで適用する
      sum += x % 10;
      x /= 10;
    }
    if (sum >= a && sum <= b) {
      ans += i;
    }
  }
  cout << ans << endl;
}