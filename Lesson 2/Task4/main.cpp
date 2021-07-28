#include <iostream>

using namespace std;

int main()
{
    int size;
    int i;
    int zvezda;
    int probel;
    cout << "Enter size:";
    cin >> size;

    for(i = 0; i < size; i++){
        for (zvezda = 0; zvezda <= i; zvezda++){
             cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (i = 0; i < size; i++){
        for (zvezda = size; zvezda > i; zvezda--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (i = 0; i < size; i++){
        for (probel = 0; i > probel; probel++){
            cout << " ";
        }
        for (zvezda = size; zvezda > i; zvezda--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (i = 0; i < size; i++){
        for (probel = size - 1; i < probel; probel--){
            cout << " ";
        }
        for (zvezda = 0; zvezda <= i; zvezda++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}


