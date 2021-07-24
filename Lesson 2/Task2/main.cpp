#include <iostream>

using namespace std;

int main()
{
    int num;
    int i;
    cout << "Enter number: " << endl;
    cin >> num;
    cout << "Numbers: ";
    for (i = 0; i < num; i++){
        cout << i << ", ";
    }
    cout << num << endl;
    return 0;
}

