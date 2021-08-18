#include <iostream>

using namespace std;

int main()
{
    int num[5];
    int maximum = 0;
    int i = 0;
    cout << "Vedite 5 chisel: ";
    while(true) {
        for (; i < 5; i++) {
            cout << "[" << i + 1 << "]" << ": ";
            cin >> num[i];
            if(maximum < num[i]) {
                maximum = num[i];
            }
            if(num[i] <= -1){
                cout << "Error! Enter number above zero!!!!!" << endl;
                break;
            }
        }
        if(i == 5){
            break;
        }
    }
    for (int i = 0; i < maximum; i++) {
        for (int entr = 0; entr < 5; entr++) {
            if (num[entr] - 1 < i) {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
}
