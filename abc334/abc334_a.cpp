#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int b, g;
  cin >> b >> g;

  if (b > g) {
    cout << "Bat" << endl;
  }
  else cout << "Glove" << endl;

  return 0;
}