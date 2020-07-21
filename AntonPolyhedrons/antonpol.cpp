#include <iostream>
#include <string.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    char* word;
    int count = 0;
    cout << endl;
    while (n--){
        /*
        strcmp anda mal al parecer
        */
        cin >> word;
        if (strcmp(word,(char*)"Tetrahedron") != 0){
            cout << "TETHRAEDRON" << endl;
            count += 4;
        }
        else if (strcmp(word,(char*)"Cube") != 0){
            cout << "CUBE" << endl;
            count += 6;
        }
        else if (strcmp(word,(char*)"Octahedron") != 0) {
            cout << "OCTA" << endl;
            count += 8;
        }
        else if (strcmp(word,(char*)"Dodecahedron") != 0) {
            cout << "DODE" << endl;
            count += 12;
        }
        else {
            cout << "ICO" << endl;
            count += 20;
        }
    }
    cout << count;
}