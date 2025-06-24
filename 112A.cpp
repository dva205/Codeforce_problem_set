#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;

    cin >> s >> t;

    if (s.length() < 1 || s.length() > 100 || t.length() < 1 || t.length() > 100) return 0;

    for (char &c : s){ //&c tham chiếu đến từng kí tự trong chuỗi, c là bản copy
        c = tolower(c);
    }

    for (char &c : t) c = tolower(c);


    if (s < t) cout << -1;
    else if (s > t) cout << 1;
    else cout << 0;

}