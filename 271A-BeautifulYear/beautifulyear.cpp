#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    bool found = false;
    int candidate = n;
    string word;
    while (!found) {
        candidate++;
        word = to_string(candidate);
        found = true;
        for(int i = 0;i < word.length()-1;i++){
            for(int j = i+1;j < word.length();j++){
                if (word[i] == word[j]){
                    found = false;
                    break;
                }
            }
        }
    }
    cout << candidate;
}