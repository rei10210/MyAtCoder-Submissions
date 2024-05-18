#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0; //発芽してからの日付
    int h; //高橋君の身長
    int h1 = 1; //植物の高さ
    int h2;

    cin >> h;

    while (h2 <= h) {
        h1 *= 2;
        i++;
        h2 = h1 - 1;
    }

    cout << i << endl;

}
