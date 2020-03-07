#include <iostream>

using namespace std;

int main (){
    string s,s2;
    cout << "Word: ";
    cin >> s;
    int len = s.length();
    s2 = '.';
    for (unsigned int i = 0; i < len; i++){
        s[i] = tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
            continue;
        }
        else{
           cout << '.' << s[i];
        }
    }
}