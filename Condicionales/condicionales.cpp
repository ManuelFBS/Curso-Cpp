#include <iostream>

int main()
{
        int age;

        std::cout << "Introduce tu edad: ";
        std::cin >> age;

        if (age < 0)
        {
                std::cout << "Aun no has nacido...!";
        }
        else if (age >= 0 and age < 18)
        {
                std::cout << "No tienes permitido el ingreso...!";
        }
        else if (age >= 18 and age <= 100)
        {
                std::cout << "Bienvenido !!!";
        }
        else
        {
                std::cout << "A esta edad de " << age << " anyos... Ya para que vas entrar...!";
        }

        return 0;
}