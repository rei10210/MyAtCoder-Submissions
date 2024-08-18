/**
*    author:  rei10210
*    created: 2024.08.17 21:05:06
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  //b > c: 寝てる間に日付が変わる（0時をまたぐ）
  //c > b: 寝てる間に日付が変わらない
  if ((b > c && a > c && b > a) || (c > b && ((0 <= a && a < b) || c < a && a <= 23))) {
    cout << "Yes" << endl;
  }
  else cout << "No" << endl;
}