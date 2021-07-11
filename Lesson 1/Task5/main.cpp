#include <iostream>

using namespace std;

int main()
{
   int num1;
   int num2;
   int deistvie;
   cout << "Enter first number: " << endl;
   cin >> num1;
   cout << "Enter second number: " << endl;
   cin >> num2;
   cout << "Enter 1 if u want +.\nEnter 2 if u want -. \nEnter 3 if u want *. \nEnter 4 if u want /." << endl;
   cin >> deistvie;
   switch ( deistvie ){
   case 1:
       cout << "resultat +: " << num1 + num2 << endl;
       break;
   case 2:
       cout << "resultat -: " << num1 - num2 << endl;
       break;
   case 3:
       cout << "resultat *: " << num1 * num2 << endl;
       break;
   case 4:
       cout << "resultat /: " << num1 / num2 << endl;
       break;
   }
}
