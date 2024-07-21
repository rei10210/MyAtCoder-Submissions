/**
*    author:  rei10210
*    created: 2024.07.20 20:58:18
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int r;
  int ans;
  cin >> r;
  if (r <= 99) cout << 100-r << endl;
  else if(r <= 199) cout << 200-r << endl;
  else if(r <= 299) cout << 300-r << endl;
  else cout << 400-r << endl;
}