#include<iostream>

using namespace std;

int main (){
    string word;
    int lines;
    cin >> lines;
    while(lines--){
        cin >> word;
        if (word.length() > 10){
            cout << word[0] << word.length() - 2 << word[word.length()-1] << endl;
        }
        else {
            cout << word;
        }
    }
    return 0;
}