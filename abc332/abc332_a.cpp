#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, s, k;
  cin >> n >> s >> k;

  vector<int> p(n);
  vector<int> q(n);

  int price = 0;
  for (int i = 0; i < n; ++i) {
    cin >> p[i] >> q[i];
    price += p[i]*q[i];
  }
  if (price < s) {
    price += k;
  }

  cout << price << endl;

  return 0;
}