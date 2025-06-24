#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> nums;

    for (int i = 0; i < s.length(); i+=2){
        nums.push_back(s[i] - '0'); // s[i] - '0': ví dụ số 1 mã ASCII là 49 - số 0 mã ASCII là 48 = 1
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++){
        if (i > 0) cout << "+";
        cout << nums[i];
    }

}