#include<iostream>

using namespace std;

int main () {
    int n;  //n inputs
    cin >> n;
    int people_inside_the_tram = 0;
    int enters;
    int exits;
    int max = 0;
    for (int i = 0; i < n; i++){
        cin >> exits >> enters;
        people_inside_the_tram += enters;
        people_inside_the_tram -= exits;
        if (max < people_inside_the_tram){
            max = people_inside_the_tram;
        }
    }
    printf("%d",max);
}