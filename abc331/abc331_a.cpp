#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int M, D, y, m, d;
  cin >> M >> D >> y >> m >> d;
  
  if (m == M && d == D) {
    cout << y + 1 << " " << 1 << " " << 1 << endl;
  }
  else if (d ==  D) {
    cout << y << " " << m + 1 << " " << 1 << endl;
  }
  else {
    cout << y << " " << m << " " << d + 1 << endl;
  }
  
  return 0;
}