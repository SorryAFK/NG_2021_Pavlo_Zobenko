#include <iostream>

using namespace std;

int main()
{
    int size;
    int i;
    int y;
    cout << "Enter size of square: ";
    cin >> size;
    for (i = 1; i <= size; i++){
        for (y = 1; y <= size; y++ ){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
