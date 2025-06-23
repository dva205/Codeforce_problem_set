#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n; // n is the number of words
    if (n < 1 || n > 100) return 0;

    string word;
    vector<string> words(n); 

    for (int i = 0; i < n; i++){
        cin >> words[i];

        // All of the letters must be lower case
        for (char c : word){
            if (c < 'a' || c > 'z') return 0;
        }

    }
    
    for (string word : words){
         int length = word.length();

        // Under 10 letters remains same
        if (length <= 10) {
            cout << word << endl;
        }
        else {
            string shortened = word[0] + to_string(length - 2) + word.back();
            cout << shortened << endl;
        }
    }
       
}

