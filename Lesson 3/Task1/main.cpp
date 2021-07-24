#include <iostream>

using namespace std;

int main()
{
    int arr [10];
    int sch;
    int a;
    cout << "Enter 10 school numbers" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> arr[i];
    }
    cout << "Enter your school number ";
    cin >> sch;
    for(int i  =0; i < 10; i++){
        if (sch == arr[i]) {
            a = 1;
        }
    }
    if (a == 1){
        cout << "i know this school!" << endl;
    }
    else {
        cout << "idk about this school :(" << endl;
    }

    return 0;
}
