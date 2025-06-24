#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> matrix(5, vector<int>(5)); // 5x5 matrix and all entries are 0
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> matrix[i][j];
        }
    }
    
    int dist = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (matrix[i][j] == 1){
                dist = abs(i - 2) + abs(j - 2);
            }
        }
    }

    cout << dist;


}