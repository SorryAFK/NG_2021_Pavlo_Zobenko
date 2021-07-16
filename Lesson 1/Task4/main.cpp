#include <iostream>

using namespace std;

int main()
{
   int zp;
   cout << "Skolko ti zarabativaesh v dolarah ?" << endl;
   cin >> zp;
   if (zp < 1000){
       cout << "Rabotai bolshe!No ti molodec!" << endl;
   }
   if (zp > 999){
       if (zp > 999999){
           cout << "Da ti milioner!!!" << endl;
       }
       if (zp < 1000000){
           cout << "Kruto" << endl;
       }
   }
}
