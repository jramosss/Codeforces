#include <iostream>

using namespace std;

int main () {
    int x;  //Distance
    int count = 0;
    cin >> x;
    while (x > 0) {
        if (x >= 5){
            x-=5;
        }
        else if (x >= 4){
            x-=4;
        }
        else if (x >= 3){
            x-=3;
        }
        else if (x >= 2) {
            x-= 2;
        }
        else {
            x-=1;
        }
        count++;
    }
    printf("%d",count);
    return 0;
}