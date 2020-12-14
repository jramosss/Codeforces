#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int* levelsx = (int*)calloc(n,sizeof(int));
    int* levelsy = (int*)calloc(n,sizeof(int));

    for (int i = 0; i < n; i++){
        cin >> levelsx[i];
    }
    for (int i = 0; i < n; i++){
        cin >> levelsy[i];
    }
    bool first = true;
    for (int i = 0; i <= n; i++){
        for (int j = i; j < n; j++){
            if (first) {
                first = false;
                continue;
            }
            else if (levelsx[j] == i || levelsy[j] == i){
                continue;
            }
            else{
                cout << "Oh, my keyboard!";
                return -1;
            }
        }
    }
    cout << "I become the guy.";
    return 0;
}