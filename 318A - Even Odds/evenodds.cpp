#include <iostream>

using namespace std;

int main (void) {
    int n,k,j = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i+=2){
        if (j == k) {
            cout << i-2;
            return 0;
        }
        j++;
    }
    for (int i = 0; i <= n; i += 2) {
        if (j == k) {
            cout << i;
            return 0;
        }
        j++;
    }
    return 0;
}