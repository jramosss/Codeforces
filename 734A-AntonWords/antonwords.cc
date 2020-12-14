#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    string word;
    cin >> word;
    int arr[1000];
    int j = 0;
    for (char c : word) {
        if (c == '}' || c == '{' || c == ' '){
            continue;
        }
        else {
            arr[j] = (int) c;
        }
        j++;
    }
    int count = 0;
    for (int i = 0; i < word.length()-1; i++){
        for (int k = i+1; k < word.length(); k++){
            if (arr[i] == '{' || arr[i] == '}' || arr[j] == '{' || 
                arr[j] == '}' || arr[i] == ' ' || arr[j] == ' ')
                continue;
            else {
                count += arr[i] != arr[j];
            }
        }
    }
    cout << count;

}