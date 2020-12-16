#include <iostream>

using namespace std;

int main (void) {
    int n, max = 0,spent = 0;
    cin >> n;
    int citizens[n];
    for (int i = 0; i < n; i++){
        cin >> citizens[i];
        if (citizens[i] > max)
            max = citizens[i];
    } 
    for (int c : citizens)
        spent += max - c;
        
    cout << spent;
}