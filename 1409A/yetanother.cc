//UNSOLVED
#include <iostream>

using namespace std;
//wtf
int main (void) {
    int n,a,b,thresshold,res = 0; 
    cin >> n;
    while (n--){
        cin >> a >> b;
        thresshold = b - a;
        if (!thresshold)
            res = thresshold;
        // b > a
        else if (thresshold > 0){
            while (thresshold > 0){
                if (thresshold % 10 == 0)
                    res += thresshold / 10;
                else if (thresshold > 5)
                    thresshold -= 5;
                else 
                    thresshold--;
                res++;
            }
        }
        else {
            while (thresshold < 0){
                if (thresshold < 10)
                    thresshold += 10;
                else if (thresshold < 5)
                    thresshold += 5;
                else 
                    thresshold++;
                res++;
            }
        }
        cout << res;
    }
}