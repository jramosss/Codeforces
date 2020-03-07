#include<iostream>

using namespace std;

int main (){
    unsigned int contestants;
    unsigned int score_to_beat;
    cout << "Number of contestants: ";
    cin >> contestants;
    cout << "Score to beat: ";
    cin >> score_to_beat;
    int contestants_score[contestants];
    int aux = 0;
    for (unsigned int i = 0; i < contestants; i++){
        cout << "Contestant " << i << " Score: ";
        cin >> aux;
        contestants_score[i] = aux;
    }
    int c = 0;
    for (unsigned int i = 0; i < contestants; i++){
        if(contestants_score[i] > score_to_beat){
            c++;
        }
    }
    cout << c << endl;
    return 7;
}