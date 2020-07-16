#include <iostream>

using namespace std;

int main () {
    string word;
    cin >> word;
    for (char c : word){
        if (c == 'H' || c == 'Q' ||c == 9 || c == '+' /*|| (c > 33 && c <= 126)*/){
            printf("YES");
            return 0;
        }
        else{
            continue;
        }
    }
    printf("NO");
    return 0;
}