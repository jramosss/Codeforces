#include<iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    string word;
    cin >> word;
    int anton = 0; 
    int danik = 0;
    for (char c : word){
        if (c == 'A')
            anton++;
        else 
            danik++;
    }
    if (anton == danik)
        cout << "Friendship";
    else if (anton > danik)
        cout << "Anton";
    else
        cout << "Danik";
}