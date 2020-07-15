#include<iostream>

using namespace std;

int main (){
    int n;  //Number of contestants
    int participant_to_beat;    //Index of the participant to beat
    cin >> n >> participant_to_beat;
    int c = 0;
    int count = 0;
    int* contestants = (int*)calloc(n,sizeof(int));

    for (int i = 0; i < n; i++){
        cin >> contestants[i];
    }
    for (int i = 0; i < n; i++) {
        if (contestants[i] >= contestants[participant_to_beat-1] 
            && contestants[i] > 0)
            c++;
    }
    cout << c << endl;
    return 0;
}