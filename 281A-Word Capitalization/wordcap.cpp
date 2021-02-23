#include<iostream>

#define MAX 1000

using namespace std;

int main () {
    char word[MAX];
    cin >> word;
    word[0] = toupper(word[0]);
    cout << word;
}