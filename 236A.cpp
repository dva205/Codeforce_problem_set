#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    set<char> distincs; // Set ko lưu phần tử trùng nhau

    if (s.length() > 100) return 0;

    for (int i = 0; i < s.length(); i++){
        distincs.insert(s[i]);
    }

    if (distincs.size() % 2 != 0) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
}