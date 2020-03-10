#include<iostream>
//DOESNT WORK
using namespace std;

bool contains (string arr,char elem){
    for(int i = 0; i < arr.length(); i++){
        if(arr[i] == elem){
            return true;
        }
    }
    return false;
}
string init (string s,int len){
    for(int i = 0; i < len; i++){
        s[i] = ' ';
    }
    return s;
}
int main(){
    string name = "xiaodao"; // 6 letrass
    string arr = init(arr,name.length()); 
    int j = 0;
    for(int i = 0; i < name.length(); i++){
        if(!contains(arr,name[i])){
            arr[j] = name[i];
            j++;
        }
    }
}