/*
Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose 
decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 
are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. 
Help him find out if the given number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky.
Otherwise, print "NO" (without the quotes).
*/

#include <iostream>

using namespace std;

static int is_a_lucky_number (int n){
    std::string str = to_string(n);
    bool flag1 = false;
    bool flag2 = false;

    for (char c : str){
        if (c == '4' && !flag1){
            flag1 = true;
        }
        else if (c == '7' && !flag2){
            flag2 = true;
        }
    }
    return flag1 && flag2;
}

int main () {
    int n;  //Number
    cin >> n;
    if (n % 7 == 0 || n % 4 == 0 || is_a_lucky_number(n)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}


/*
En realidad el que publique fue este que es choreado pq el otro me fallaba en el test 19

#include <iostream>
using namespace std;
int a;
int main() {
    cin >> a;
    if (a % 4 == 0 || a % 7 == 0 || a % 44 == 0 || a % 47 == 0 || 
        a % 74 == 0 || a % 77 == 0 || a % 444 == 0 || a % 447 == 0 
        || a % 474 == 0 || a % 477 == 0 || a % 744 == 0 || a % 747 == 0 
        || a % 774 == 0 || a % 777 == 0) {

        cout << "YES";
    } else {
        cout << "NO";
    }
}
*/