#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int x = 0;
    string oprt;

    cin >> n;

    int temp = x;
    for (int i = 0; i < n; i++){
        cin >> oprt;
        if (oprt == "++X" || oprt == "X++") temp++;
        else if (oprt == "--X" || oprt == "X--") temp--;
    }

    cout << temp;
}