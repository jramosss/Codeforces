#include <iostream>

using namespace std;

int main () { 
    int n;
    cin >> n;
    int capacity;
    int ocuppers;
    int count = 0;
    while (n--){
        cin >> ocuppers >> capacity;
        if (capacity-ocuppers >= 2){
            count++;
        }
    }
    cout << count;
}