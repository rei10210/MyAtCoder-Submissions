/**
*    author:  rei10210
*    created: 2024.07.13 21:05:31
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  double a = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
  double b = sqrt(pow(xc - xa, 2) + pow(yc - ya, 2));
  double c = sqrt(pow(xc - xb, 2) + pow(yc - yb, 2));
  
  if (abs(a*a + b*b - c*c) < 1e-9 || abs(a*a + c*c - b*b) < 1e-9 || abs(b*b + c*c - a*a) < 1e-9) {
    cout << "Yes" << endl;
  }
  else cout << "No" << endl;
}