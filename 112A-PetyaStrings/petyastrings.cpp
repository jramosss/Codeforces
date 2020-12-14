#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstring>

using namespace std;

string str_tolower (string s) {
    for(int i = 0; i < s.length();i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main () {
    string s1,s2;
    cin >> s1 >> s2;
    s1 = str_tolower(s1);
    s2 = str_tolower(s2);
    cout << strcmp(s1.c_str(),s2.c_str()) << endl;
}