#include <iostream>

using namespace std;

const int FOUR_HOURS = 240;

int main (void) {
    int n,k;
    cin >> n >> k;
    int excercises = 0,time = 0,i = 1;
    while (time+k <= FOUR_HOURS && n > 0) {
        if (time + 5*i +k > FOUR_HOURS)
            break;
        excercises++;
        time += 5*i;
        i++;
        n--;
    }
    cout << excercises;
}