#include <iostream>
using namespace std;

int main() {
    int k,n, w;
    cin >> k >> n >> w;

    int cnt = 0;
    for (int i = 1; i <= w; i++){
        cnt += k*i;
    }

    if (cnt < n) cout << 0;
    else cout << cnt - n;

    return 0;
}