/**
*    author:  rei10210
*    created: 2024.08.03 21:04:30
**/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  
  vector<int> a(n);
  rep(i, n) cin >> a.at(i);

  vector<int> b = a; //配列をコピー（元の配列の添え字を記録しておくため）
  sort(b.begin(), b.end()); //コピーした配列bを昇順にソート

  int x = b.at(n-2);

  rep(i, n) {
    if (a.at(i) == x) cout << i+1 << endl;
  }
}