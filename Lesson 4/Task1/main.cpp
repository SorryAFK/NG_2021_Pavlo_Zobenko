#include <iostream>

using namespace std;

int main()
{
    char text[50];
    int slov = 0;
    int simvol = 0;
    int i = 0;
    cin.getline(text,50);
    while(text[i] != 0){
        if(simvol == 0){
            if(text[i] >= 'A' && text[i] <= 'Z'){
                simvol = 1;
                slov++;
            }
            if(text[i] >= 'a' && text[i] <= 'z'){
                simvol = 1;
                slov++;
            }
        }
        else if(text[i] >= ' ' && text[i] <= '@'){
            simvol = 0;
        }
        i++;
    }
    cout << slov;
}

