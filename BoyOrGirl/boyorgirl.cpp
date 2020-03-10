#include<iostream>

using namespace std;

int main(){
    string name = "xiaodao"; // 6 letrass
    int samechar = 0;
    int disctintchar = 0;
    char comparing;
    char with;
    //cout << "Name: ";
    //cin >> name;
    for(int i = 0; i < name.length(); i++){
        for(int j = i+1; j < name.length(); j++){
            comparing = name[i];
            with = name[j];
            if(name[i] == name[j]){
                samechar++;
            }
            else{
                disctintchar++;
            }
        }
    }
    /*
    if(samechar % 2 != 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    */
    cout << "Samechar: " << samechar << endl;
    cout << "disctintchar: " << disctintchar << endl;
   if (disctintchar % 2 == 0){
       cout << "CHAT WITH HER!";
   }
   else{
       cout << "IGNORE HIM";
   }
}