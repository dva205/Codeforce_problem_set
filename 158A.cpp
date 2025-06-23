#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    int score;
    cin >> n >> k;

    vector<int> scores(n);

    for (int i = 0; i < n; i++){
        cin >> scores[i];
    }

    int cnt = 0;

    for (int i = 0; i < scores.size(); i++){
        if (scores[i] >= scores[k - 1] && scores[i] > 0) cnt++; 
    }

    cout << cnt;

}
