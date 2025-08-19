/*  **********       TIPOS DE OPERADORES LOGICOS       **********
        && -------> 'AND': verifica si 2 condiciones son verdaderas...
        || --------> 'OR': verifica si al menos 1 de las 2 condiciones es verdadera...
        ! ----------> 'NOT': Invierte la condición (true pasa a false y viceversa)... 
*/

#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

int main() {
        SetConsoleOutputCP(65001);

        const double FT_CONV = 1.8;
        double temp;
        double tempConv;
        string tSymbol1 = "";
        string tSymbol2 = "";
        char conv;

        

        printf("\n*************** Conversión de temperaturas ***************\n\n");        
        printf("C -- Farenheit (°F) a Celsius (°C)\n");
        printf("F -- Celsius (°C) a Farenheit (°F)\n\n");

        printf("Selecione 'C' o 'F' para la conversión: ");
        scanf(" %c", &conv);
        printf("\n\nIntroduzca el valor de la temperatura a convertir: ");
        scanf("%lf", &temp);

        if (conv == 'C' || conv == 'c') {
                tempConv = (temp - 32) / FT_CONV; // Fahrenheit a Celsius
                tSymbol1 = "°F";
                tSymbol2 = "°C";
        } else if (conv == 'F' || conv == 'f') {
                tempConv = (temp * FT_CONV) + 32; // Celsius a Fahrenheit
                tSymbol1 = "°C";
                tSymbol2 = "°F";
        } else {
                printf("\n\nError: Debe realizar una eleccion valida ['C' o 'F']...!");
                return 0;
        }

        printf("\n\n%.2lf %s = %.2lf %s", temp, tSymbol1.c_str(), tempConv, tSymbol2.c_str());

        return 0;
}