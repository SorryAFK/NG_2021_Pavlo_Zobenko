#include <iostream>

using namespace std;

int main()
{
    int num[20];
    int maximum = 0;
    cout << "Values: ";
    for (int i = 0; i < 20; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> num[i];
        if(num[i] == 0){
            break;
        }
        if(maximum < num[i]){
            maximum = num[i];
        }

    }
    for(int i = 0; i < maximum; i++){
        for(int enter = 0; enter < (maximum - (num[i] + enter)); enter++){
            cout << " ";
        }
        for(int enter = 0; enter != num[i]; enter++){
        cout << "*";
    }
        cout << endl;
    }
return 0;
}
