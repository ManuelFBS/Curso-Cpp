/* stringstream*/
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;

int main() 
{
        string myString;
        float price = 0;
        int quantity = 0;

        cout << "Introduzca el precio: ";
        getline(cin, myString);
        stringstream(myString) >> price;
        //
        cout << "Ingrese la cantidad: ";
        getline(cin, myString);
        stringstream(myString) >> quantity;
        //
        cout << "Precio total: " << price * quantity << '\n'
             << endl;

        return 0;
}