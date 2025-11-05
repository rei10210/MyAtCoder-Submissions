#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string n;
  cin >> n;
  for (int i = 0; i < (int)(n.size()) - 1; i++) {
    if (n[i] <= n[i+1]) {
      cout << "No" << "\n";
      return 0;
    } 
  }
  cout << "Yes" << "\n";

  return 0;
}