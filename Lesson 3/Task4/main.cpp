#include <iostream>

using namespace std;

int main()
{
    int num[40];
    int maximum = 0;
    cout << "Values: ";
    int iteratacii = 0;
    for (iteratacii = 0; iteratacii < 20; iteratacii++) {
        cout << "[" << iteratacii + 1 << "]" << ": ";
        cin >> num[iteratacii];
        if(num[iteratacii] <= 0) {
            break;
        }
        if(maximum < num[iteratacii]) {
            maximum = num[iteratacii];
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
        continue;
    }
}
