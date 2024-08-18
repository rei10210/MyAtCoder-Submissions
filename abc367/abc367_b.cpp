/**
*    author:  rei10210
*    created: 2024.08.17 21:18:18
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  double x;
  cin >> x;

  ostringstream oss;
  oss << fixed << setprecision(3) << x;
  string result = oss.str();

  while (result.back() == '0') {
    result.pop_back();
  }

   if (result.back() == '.') {
    result.pop_back();
  }
  cout << result << endl;
}