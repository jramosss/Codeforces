#include <iostream>

using namespace std;

int main () {
    int n,group,sum=0;
    cin >> n;
    while(n--){
        cin >> group;
        sum += group;
    }
    if (sum % 4 != 0)
        cout << 1+sum/4;
    else
        cout << sum/4;
}