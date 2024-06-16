#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, a;
  cin >> n >> a;
  vector<int> t(2000000);
  vector<int> ans(2000000);
  cin >> t.at(0);
  ans.at(0) = t.at(0) + a;
  cout << ans.at(0) << endl;
  for (int i = 1; i < n; i++) {
    cin >> t.at(i);
    //前の人がチケットを買い終わる前もしくは買い終わる丁度に並んだ時
    if ((t.at(i) - t.at(i-1)) <= a) {
      ans.at(i) = ans.at(i-1) + a;
      cout << ans.at(i) << endl;
    }
    //前の人がいない状態で並んだ時
    else{
      ans.at(i) = t.at(i) + a;
      cout << ans.at(i) << endl;
    }
  }
}
