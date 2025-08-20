/* 'cin' con strings */
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() 
{
        SetConsoleOutputCP(65001);

        string myString;

        cout << "Cuál es tu nombre? ";
        getline(cin, myString);

        cout << "Hola " << myString << "\n\n";

        cout << "Cuál es tu equipo favorito de Baseball? ";
        getline(cin, myString);

        cout << "Soy fanático de " << myString << "\n"
             << endl;

        return 0;
}