#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    short opinion;
    while (n--){
        cin >> opinion;
        if (opinion){
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}