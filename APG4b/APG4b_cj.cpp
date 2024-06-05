#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  int sum = 0;
  int avg = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
    sum += a.at(i);
  }
  avg = sum / n;
  for (int j = 0; j < n; j++) {
    if (avg >= a.at(j)) {
      ans = avg - a.at(j);
    }
    else {
      ans = a.at(j) - avg;
    }
    cout << ans << endl;
  }
}
