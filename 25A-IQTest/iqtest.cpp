#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int* arr = (int*)calloc(n,sizeof(int));
    int i = 0;
    while (i < n){
        cin >> arr[i];
        i++;
    }
    int even = 0;
    int uneven = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else {
            uneven++;
        }
    }

    if (even > uneven){
        for (int i = 0; i < n; i++){
            if (arr[i] % 2 != 0){
                cout << i+1;
                return 0;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++){
            if (arr[i] % 2 == 0){
                cout << i+1;
                return 0;
            }
        }
    }
    return 0;
}