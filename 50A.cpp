#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    if (m  > n || m > 16 || n > 16 || m < 1 || n < 1) return 0; 

    cout << (m*n / 2);

}