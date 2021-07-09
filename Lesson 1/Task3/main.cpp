#include <iostream>

using namespace std;

int main()
{
    int n; //Kol Oreshkov dlya zimi
    int m; //Kol oreshkov v shike
    int k; //kol shek
    cout << "skolko nujno oreshkov dlya zimi? " << endl;
    cin >> n;
    cout << "skolko oreshkov v shike ? " << endl;
    cin >> m;
    cout << "skolko sobrala shek belka ? " << endl;
    cin >> k;
    if (m * k >= n){
        cout << "Ok , jit ona budet" << endl;
    }
    else {
        cout << "No , ona ne vijivet(" << endl;
    }
}
