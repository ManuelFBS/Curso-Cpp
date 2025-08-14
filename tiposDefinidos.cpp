#include <iostream>

// Definiendo tipos con el uso de 'typedef'...
typedef std::string text1_t;
typedef int numero1_t;

// Definiendo tipos con 'using'...
using text2_t = std::string;
using numero2_t = int;

using std::cout;

int main()
{
        text1_t nombres = "Manuel Felipe";
        numero1_t edad = 63;

        text2_t apellidos = "Borrego Sterling";
        numero2_t backendPosicion = 1;

        cout << "Nombres: " << nombres << " y Apellidos: " << apellidos << '\n';
        cout << "Edad: " << edad << " -- Posición en Backened: " << backendPosicion;

        return 0;
}