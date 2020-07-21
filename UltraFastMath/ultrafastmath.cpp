#include <iostream>

using namespace std;

int main () {
    string word1,word2;
    cin >> word1 >> word2;
    //string word3 = malloc(sizeof(string));
    for (int i = 0; i < word1.length(); i++){
        if (word1[i] == '0' && word2[i] == '0' || 
            word1[i] == '1' && word2[i] == '1'){
            word1[i] = '0';
        }
        else {
            word1[i] = '1';
        }
    } 
    cout << word1;
    return 0;
}