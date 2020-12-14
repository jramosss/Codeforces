#include <iostream>

using namespace std;
/*
Este problema de mierda me re tilteo por que en python 
no corre lo suficientemente rapido y en cpp me tira error en el primer
test a pesar de que lo testee con varios ejemplos y anda.
Conclusion: La concha de tu madre ejercicio de mierda
*/
int main () {
    string word;
    cin >> word;
    int count = 0;
    bool found_first_word = false;
    int i = 0;
    bool followed = false;
    while (i < word.length()) {
        if (!found_first_word && word[i] == 'W' && word[i+1] == 'U' && word[i+2] == 'B'){
            word[i] = (char)0;word[i+1] = (char)0;word[i+2] = (char)0; 
            i += 3;
        }
        else
            found_first_word = true;
        
        if (found_first_word){
            if (word[i] == 'W' && word[i+1] == 'U' && word[i+2] == 'B'){
                word[i] = (char)0;
                word[i+1] = (char)0;
                word[i+2] = followed /*|| (i+3 == word.length())*/ ? (char)0 : ' '; 
                followed = true;
                i += 3;

            }
            else {
                followed = false;
                i++;
            }
        }
    }
    //word[word.length()-1] = (char)0;
    cout << word;
}