#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int h, b;
  cin >> h >> b;

  if (h > b) {
    cout << h - b << endl;
  }
  else {
    cout << 0 << endl;
  }

  return 0;
}