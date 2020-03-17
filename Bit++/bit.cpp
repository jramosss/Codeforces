#include <iostream>
#include <string>

using namespace std;

int main() {
    int lines, x(0);
    cin >> lines;

    string s;
    while (lines--) {
        cin >> s;
        if (s[1] == '+') {
            ++x;
        }
        else{
            --x;
        }
    }

    cout << x << endl;
    return 0;
}