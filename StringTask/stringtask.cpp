#include <iostream>

using namespace std;

int main (){
    string s;
    char s2 = '.';
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++){
        s[i] = tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
            continue;
        }
        else{
           cout << '.' << s[i];
        }
    }
}