#include <iostream>

using namespace std;

int main()
{
    int num[40];
    int maximum = 0;
    int score = 0;
    cout << "Values: ";
    while(true) {
        for (int i = 0; i < 20; i++) {
            score++;
            cout << "[" << i + 1 << "]" << ": ";
            cin >> num[i];
            if(maximum < num[i]) {
                maximum = num[i];
            }
            if(num[i] == 0) {
                break;
            }
        }
        if(num[score] < 0){
            cout << "Error! Enter number above zero!!!!!" << endl;
            break;
        }
        if (score == 20 || num[score] == 0) {
            break;
        }
    }
    for(int c = 0; c < score; c++) {
        for(int enter = 0; enter <= (maximum  - (num[c] + enter)); enter++) {
            cout << " ";
        }
        for(int enter = 0; enter != num[c]; enter++) {
            cout << "*";
        }
        cout << endl;
    }
}
