#include<iostream>

using namespace std;

int main () {
    string word;
    cin >> word;
    string word2 = "hello";
    int j = 0;
    int pas = 0;
    for(int i = 0; i < word.length(); i++){
        if(word[i] == word2[j]){
            j++;
            pas++;
        }
        if(pas == 5){
            break;
        }
    }
    if (pas == 5){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}