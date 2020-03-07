#include<iostream>

using namespace std;

int main () {
    string sum;
    cout << "Sum?: ";
    cin >> sum;
    int c = 0;
    for(int i = 0; i < sum.length; i++){
        if(sum[i] == '+'){
            continue;
        }
        else{
            c += stoi(sum[i]); // Parseint
        }
    }
    cout << c;
}