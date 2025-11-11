#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (c >= a && b > d)  {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}