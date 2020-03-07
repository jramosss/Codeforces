#include<iostream>

using namespace std;

string word;
int main (){
    unsigned int lines;
    cout << "Lines: ";
    cin >> lines;
    for (unsigned int i = 0; i < lines; i++){
        cout << "word";
        cin >> word;
        if (word.length() > 10){
            cout << word[0] << word.length() - 2 << word[word.length()-1] << endl;
        }
        else {
            cout << word;
        }
    }
    return 7;
}