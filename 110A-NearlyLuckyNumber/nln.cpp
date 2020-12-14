#include <iostream>
#include <string>

using namespace std;

static bool is_a_lucky_number (int number) {
    string word = std::to_string(number);
    for (char c : word) {
        if (c == '4' || c == '7'){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

int main () {
    int number;
    cin >> number;
    int count = 0;
    string word = std::to_string(number);
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == '7' || word[i] == '4')
            count++;
    }
    printf(is_a_lucky_number(count) ? "YES" : "NO");
}