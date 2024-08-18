/**
*    author:  rei10210
*    created: 2024.08.06 14:14:31
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;
  int cnt = 0;
  for(int i = 0; i < s.size(); i++) {
    if (s[i] == '1') cnt++;
  }

  cout << cnt << endl;
}