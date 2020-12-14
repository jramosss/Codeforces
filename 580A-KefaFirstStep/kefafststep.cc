#include <iostream>

using namespace std;

int main () {
    int n; 
    cin >> n;
    int count = 0;
    int maxcount = 0;
    int* arr = (int*)calloc(n,sizeof(int));
    int j = 0;
    int temp = n;
    while (temp--){
        cin >> arr[j];
        j++;
    }
    for (int i = 0; i < n-1; i++){
        if (arr[i] <= arr[i+1]){
            count++;
        }
        else{
            maxcount = maxcount < count ? count : maxcount;
            count = 0;
        }
        maxcount = maxcount < count ? count : maxcount;
    }
    cout << maxcount+1;
}