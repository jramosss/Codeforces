#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int a,b;
    int count = 0;
    while (n--) {
        cin >> a >> b;
        count = 0;
        while (a%b != 0){
            count++;
        }
        
    }
}