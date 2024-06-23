#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  string s;
  int ans = 0;
  cin >> n;
  rep(i, n) {
    cin >> s;
    if (s == "Takahashi"){
      ans++;
    }
  }
  cout << ans << endl;
}
