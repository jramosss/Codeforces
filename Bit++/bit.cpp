#include<iostream>

using namespace std;

int main() {
    uint statements;
    uint x = 0;
    cout << "Number of statements: ";
    cin >> statements;
    short temp_stat;
    for (uint i = 0; i < statements; i++) {
        cout << "Statement <1 = ++, 0 = -->";
        cin >>  temp_stat;
        if(temp_stat == 0) {
            x--;
        }
        else if (temp_stat == 1) {
            x++;
        }
        else {
            cout << "Wrong input";
        }
    }
    cout << x;
}