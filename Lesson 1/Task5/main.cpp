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
   cout << "Enter 1 if u want +." << endl << "Enter 2 if u want -." << endl << "Enter 3 if u want *."<< endl << "Enter 4 if u want /." << endl;
   cin >> deistvie;
   cout << "Resultat: ";
   switch ( deistvie ){
   case 1:
       cout << num1 + num2 << endl;
       break;
   case 2:
       cout << num1 - num2 << endl;
       break;
   case 3:
       cout << num1 * num2 << endl;
       break;
   case 4:
       cout << num1 / num2 << endl;
       break;
   }
}
