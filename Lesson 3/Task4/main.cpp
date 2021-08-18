#include <iostream>

using namespace std;

int main()
{
    int num[40];
    int maximum = 0;
    cout << "Values: ";
    int iteratacii = 0;
    while(true) {
        for (; iteratacii < 20; iteratacii++) {
            cout << "[" << iteratacii + 1 << "]" << ": ";
            cin >> num[iteratacii];
            if(maximum < num[iteratacii]) {
                maximum = num[iteratacii];
            }
            if(num[iteratacii] == 0) {
                break;
            }
            if(num[iteratacii] < 0){
                cout << "Error! Enter number above zero!!!!!" << endl;
                break;
            }

        }
        if (iteratacii == 20 || num[iteratacii] == 0) {
            break;
        }
    }


    for(int i = 0; i < iteratacii; i++) {
        for(int enter = 0; enter <= (maximum  - (num[i] + enter)); enter++) {
            cout << " ";
        }
        for(int enter = 0; enter != num[i]; enter++) {
            cout << "*";
        }
        cout << endl;
    }
}
