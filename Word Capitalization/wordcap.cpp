#include<iostream>
#include<cmath>

using namespace std;

int main () {
    string word;
    cout << "Word: ";
    cin >> word;
    if (word.length() > pow(10,3)){
        cout << "Too long word";
        main();
    }
    word[0] = toupper(word[0]);
    cout << word;
}