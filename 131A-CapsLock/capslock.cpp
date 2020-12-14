#include<iostream>

using namespace std;

char* change (string word) {
    bool first = true;
    int i = 0;
    char* newstr = (char*)calloc(word.length(),sizeof(char));
    for (char c : word) {
        if (first){
            newstr[i] = toupper(c);
            first = false;
        }
        else {
            newstr[i] = tolower(c);
        }
        i++;
    }
    return newstr;
}

bool is_caps (string word) {
    bool first = true;
    for (char c : word){
        if (first) {
            first = false;
        }
        else {
            if (islower(c)){
                return false;
            }
        }
    }
    return true;
}

int main () { 
    string word;
    cin >> word;
    auto res = is_caps(word) ? change(word) : word;
    cout << res;
}