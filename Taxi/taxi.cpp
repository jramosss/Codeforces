#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int group;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        cin >> group;
        sum += group;
    }
    while (sum != 0) {
        if (sum >= 4) {
            count = sum/4;
            sum %= 4;
        }
        else if (sum >= 3) {
            count += sum/3;
            sum %= 3;
        }
        else if (sum >= 2) {
            count += sum/2;
            sum %= 2;
        }
        else {
            count++;
            sum--;
        }
    }
    printf("%d",count);
}