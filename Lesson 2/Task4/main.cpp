#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    int zvezda = 0;
    int probel = 0;
    cout << "Enter size:";
    cin >> size;

    for(int i = 0; i < size; i++){
        for (zvezda = 0; zvezda <= i; zvezda++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < size; i++){
        for (zvezda = size; zvezda > i; zvezda--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < size; i++){
        for (probel = 0; i > probel; probel++){
            cout << " ";
        }
        for (zvezda = size; zvezda > i; zvezda--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < size; i++){
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


