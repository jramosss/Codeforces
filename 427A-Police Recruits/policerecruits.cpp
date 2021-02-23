#include <iostream>

using namespace std;

//Didnt pass the tests, dunno why

int main (void) {
    int n,cops = 0,crimes = 0,a;
    cin >> n;
    //
    while (n--){
        cin >> a;
        if (a > 0)
            cops += a;
        else {
            if (cops && crimes)
                //bc a is negative
                cops -= abs(a);
            else
                crimes += abs(a);
        }
    }
    cout << crimes;
}