#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s1;
  int upper = 0;
  int lower = 0;
  cin >> s1;
  string s2 = s1;

  for (int i = 0; i < s1.size(); i++) {
    if (isupper(s1.at(i))) {
      upper++;
    }
    else {
      lower++;
    }
  }
  if (upper > lower) {
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
  }
  else {
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
  }
  cout << s2 << endl;
}
