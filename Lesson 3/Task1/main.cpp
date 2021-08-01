#include <iostream>

using namespace std;

int main()
{
    int arr [10];
    int school = 0;
    int chekschool = 0;
    cout << "Enter 10 school numbers" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> arr[i];
    }
    cout << "Enter your school number ";
    cin >> school;
    for(int i =0; i < 10; i++){
        if (school == arr[i]) {
            chekschool = 1;
        }
    }
    if (chekschool == 1){
        cout << "i know this school!" << endl;
    }
    else {
        cout << "idk about this school :(" << endl;
    }

    return 0;
}
