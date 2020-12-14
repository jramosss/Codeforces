#include<iostream>

using namespace std;

bool check (int n){
    return 1 <= n && n <= 50;
}

int main () {
    int number_of_stones;
    char colors[50];
    cout << "Number of stones: (1,50)";
    cin >> number_of_stones;
    if(!check(number_of_stones)){
        cout << "Invalid input, number must be between 1 and 50";
        main();
    }
    cout << "Colors: ";
    cin >> colors;
    int count = 0;
    for(int i = 1; i < number_of_stones; i++){
        if (colors[i-1] == colors[i]){
            count++;
        }
    }
    cout << "Necessary Moves: " << count << endl;
}