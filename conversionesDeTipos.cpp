#include <iostream>

using std::cout;

int main()
{
        int preguntasAcertadas = 287;
        int totalPreguntas = 300;
        double puntaje;

        puntaje = preguntasAcertadas / double(totalPreguntas) * 100;

        cout << "Puntaje: " << puntaje << "%";

        return 0;
}