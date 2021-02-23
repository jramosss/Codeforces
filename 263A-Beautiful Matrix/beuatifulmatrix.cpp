#include <iostream>

using namespace std;

int main () {
    int one;
    int x;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++) {
            cin >> x;
            if (x) {
                cout << abs(i-2) + abs(j-2);
                break;
            }
        }
    }
    return 0;
}