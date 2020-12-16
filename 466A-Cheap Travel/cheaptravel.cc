#include <iostream>

using namespace std;

int main (void) {
    /*
    * N - The number of rides Ann has planned
    * M - The number of rides covered by the m ride ticket
    * A - The price of a one ride ticket
    * B - The price of an m ride ticket.
    * OUT - The min sum of money ann can spend
    */
    int n,m,a,b,sum = 0;
    cin >> n >> m >> a >> b;

    while (n) {
        if (b < a*n && n-m) {
            sum += b;
            n -= m;
        }
        else {
            sum += a;
            n--;
        }
    }
    cout << sum;
}