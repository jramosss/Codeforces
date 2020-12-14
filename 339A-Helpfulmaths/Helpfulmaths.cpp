#include<iostream>

using namespace std;

int main () {
    string s,s2;
    cin >> s;
    int t(0),d(0),u(0);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '+'){
            continue;
        }
        else{
            if (s[i] == 3){
                t++;
            }
            else if (s[i] == 2){
                d++;
            }
            else {
                u++;
            }
        }
    }
    int j = 0;
    bool last = false;
    while(u--){
        s2[j] = '1';
        s2[j+1] = '+';
        j += 2;
    }
    while(d--){
        s2[j] = '2';
        s2[j+1] = '+';
        j += 2;
    }
    while(t--){
        s2[j] = '3';
        s2[j+1] = '+';
        j += 2;
    }
    cout << s2;
}