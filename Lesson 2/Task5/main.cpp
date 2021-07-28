#include <iostream>

using namespace std;

int main()
{
    int size;
    int nline;
    int zvezda;
    int probel;
    cout << "enter size: ";
    cin >> size;

    for (nline = 0; nline < size; nline++){
        for (probel = size - 1;probel > nline;probel--){
            cout << " ";
        }
        for (zvezda = 0;zvezda <= nline * 2;zvezda++){
            cout << "*";
        }
        cout << endl;
    }
    for (probel = size;probel < zvezda;probel++){
        cout << " ";
    }
    cout << "*";

    return 0;
}

