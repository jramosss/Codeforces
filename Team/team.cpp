#include<iostream>

using namespace std;

int main () {
    int number_of_problems;
    cin >> number_of_problems;
    short petya;
    short vasya;
    short tonya;
    int c = 0;
    while(number_of_problems--){
        cin >> petya;
        cin >> vasya;
        cin >> tonya;
        if (tonya + vasya + petya >= 2){
            c++;
        }
    }
    cout << c;
    return 0;
}