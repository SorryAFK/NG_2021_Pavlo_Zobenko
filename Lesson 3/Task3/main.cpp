#include <iostream>

using namespace std;

int main()
{
    int num[5];
    int maximum = 0;
    cout << "Vedite 5 chisel:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> num[i];
        if(maximum < num[i]){
            maximum = num[i];
        }
    }
        for (int i = 0; i < maximum; i++)
        {
            for (int entr = 0; entr < 5; entr++) {
                if (num[entr] - 1 < i)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        }

}
