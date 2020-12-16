#include <iostream>

using namespace std;

//Didnt pass the tests, dunno why

int main (void) {
    int n,polices = 0,crimes = 0,a;
    cin >> n;
    while (n--){
        cin >> a;
        if (a > 0)
            polices += a;
        else {
            if (polices && crimes)
                polices-= a;
            else
                crimes -= a;
        }
    }
    cout << crimes;
}