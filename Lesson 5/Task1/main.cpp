#include <iostream>

using namespace std;
int size = 0;
int nline = 0;
int zvezda = 0;
int probel = 0;

int enterSize(int size = 0){
    cout << "enter size:";
    cin >> size;
    return size;
}

void CoutElka (int size, char vuvod) {
    for (int star = 0; star < size; star++) {
        cout << vuvod;
    }
}

void listva (int size = 0) {
    for (int i = 1; i <= size; i++) {
        CoutElka(size - i, ' ');
        CoutElka(i * 2 - 1, '*');
        cout << endl;
    }
}

void stolb (int size) {
    CoutElka(size - 1, ' ');
    cout << "*";
}

void derevo (int size) {
    listva(size);
    stolb(size);
}

int main(){
     derevo(enterSize());

}



