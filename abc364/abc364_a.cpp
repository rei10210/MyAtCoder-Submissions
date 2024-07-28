/**
*    author:  rei10210
*    created: 2024.07.27 20:47:29
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<string> s(500);
  for (int i = 0; i < n; i++) {
    cin >> s.at(i);
  }

  bool flag = true;
  for (int i = 0; i < n; i++) {

    if (((s.at(i) == "sweet") && (s.at(i+1) == "sweet")) && (s.at(i+2) != "")) {
      flag = false;
    }
  }
  if (flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}