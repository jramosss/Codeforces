#include <iostream>
#include <algorithm>

using namespace std;

int arr[5], e = 3;
int main() {
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + 4);

    for (int i = 0; i < 3; i++) {
        if (arr[i] != arr[i + 1]) {
            e--;
        }
    }
    
    cout << e;
}