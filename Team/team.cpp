#include<iostream>

using namespace std;

int main () {
    int number_of_problems;
    cout << "Number of problems: ";
    cin >> number_of_problems;
    short petya;
    short vasya;
    short tonya;
    uint c = 0;
    for (uint i = 0; i < number_of_problems; i++){
        cout << "Problem " << i;
        cout << "Petya Opinion: ";
        cin >> petya;
        cout << "Vasya Opinion: ";
        cin >> vasya;
        cout << "Tonya Opinion: ";
        cin >> tonya;
        if (tonya + vasya + petya >= 2){
            c++;
        }
    }
    cout << c;
    return 7;
}