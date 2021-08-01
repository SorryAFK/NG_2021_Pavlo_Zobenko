#include <iostream>

using namespace std;

int main()
{
    int cards[10] , carta = 0 , dengi = 0 , summa = 0;
    char exitt;
    for(int i = 0; i < 10; i++){
        cards[i] = 0;
    }
    while (true){
        cout << "Na yaku kartu polojit dengi?" << endl;
        for(int i = 0; i < 10; i++){
            cout << cards[i] << "  ";
        }
        cout << endl;
        cin >> carta;
        if(carta > 10 || carta < 1){
            carta = 0;
            cout << "Error!" << endl;
            continue;
        }
        cout << "skolko deneg polojit?" << endl;
        cin >> dengi;
        cards[carta - 1] =  cards[carta - 1] + dengi;
        summa = summa + dengi;
        cout << endl << "Summa = " << summa << endl;
        cout << "Esli hotite vuiti najmite x, chtobi prodoljit najmite lubuu knopku!" << endl;
        cin >> exitt;
        if(exitt == 'x'){
            break;
        }
    }
}

