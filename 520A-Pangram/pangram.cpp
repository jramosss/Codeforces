#include<iostream>

using namespace std;

bool contains (char* arr,int n,char c){
    for (int i = 0; i < n; i++){
        if (arr[i] == c)
            return true;
    }
    return false;
}

int main (void) {
    int n;
    cin >> n;
    char word[n];
    cin >> word;
    char* marked = (char*)malloc(sizeof(char)*n);
    int j = 0;
    for (int i = 0; i < n; i++){
        if ((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z')){
            if (!contains(marked,n,word[i]))
                marked[j] = word[i];
        }
        else{
            cout << "NO";
            break;
        }
    }
}