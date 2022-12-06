// fibonazi.cpp 
#include <iostream>
using namespace std;

int main()
{
    int b = 1, a = 0, lim;
    
    cout << "Ingrese un numero para el limite de la sucesion de fibonacci: ";
    cin >> lim;
    if (lim > 0) 
    {
        for (int i = 1; i < lim; i++) 
        {
            cout << "-" << a << "- ";
            
            b + a; 
            
            a = b - a;
            
            cout << endl;
        }
    }
    else 
    {
        cout << "El numero debe ser mayor a cero buey" << endl;
    }
    return 0;
}
