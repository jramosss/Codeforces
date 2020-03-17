#include<iostream>

using namespace std;

int main (){
    int contestants;
    int score_to_beat;
    cin >> contestants;
    cin >> score_to_beat;
    int contestant_score;
    int c = 0;
    for (int i = 0; i < contestants; i++){
        cin >> contestant_score;
        if (contestant_score > score_to_beat){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}