#include <iostream>

using namespace std;

int main()
{
    int i;
    int zvezda;
    cout << "Skolko0 zvezd hotite videt?" << endl;
    cin >> zvezda;
    for ( i = 1; i <= zvezda; i++){
        cout << "*";
    }
    return 0;
}
