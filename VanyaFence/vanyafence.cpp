#include<iostream>

using namespace std;

int main () { 
    int n;  //Number of friends
    int h;  //Height of the fence
    cin >> n >> h;
    int fri;
    int count = 0;
    while (n--){
        cin >> fri;
        count += fri <= h ? 1 : 2;
    }
    cout << count;
}