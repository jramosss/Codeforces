#include <iostream>

using namespace std;
// I copy pasted it bc i got sick of being rejected by codeforces
int main(){
    int n, x, y, z, xsum(0), ysum(0), zsum(0);
    cin >> n;

    while (n--) {
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0 && ysum == 0 && zsum == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}