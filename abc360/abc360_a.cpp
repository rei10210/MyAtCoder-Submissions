/**
*    author:  rei10210
*    created: 2024.06.30 21:00:18
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  vector<char> s(100);
  for (int i = 0; i < 3; i++) {
    cin >> s.at(i);
  }
  if(s.at(0) == 'R' || (s.at(1) == 'R' && s.at(2) == 'M')) {
    cout << "Yes" << endl;
  }
  else cout << "No" << endl;
}