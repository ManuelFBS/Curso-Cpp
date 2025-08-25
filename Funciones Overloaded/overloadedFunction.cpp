/* Overloaded Functions */
#include <iostream>
using namespace std;

int operate(int a, int b);
double operate(double a, double b);

int main()
{
        int x = 5, y = 2;
        double m = 5.0, n = 2.0;

        cout << '\n' << operate(x, y) << '\n';
        cout << operate(m, n) << '\n' << endl;

        return 0;
}

int operate(int a, int b) { return (a * b); }

double operate(double a, double b) { return a / b; }