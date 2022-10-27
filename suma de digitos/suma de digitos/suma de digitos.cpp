// suma de digitos.cpp 
//

#include <iostream>
using namespace std;

//num > 10 y < 100

int main()
{
    int Lmenor = 10, Lmayor = 99, Dig_usuario = 0, a = 0, b = 0, div = 2, c = 0 ;
    cout << "ingresa un numero mayor que 10 y menor que 100" << endl;
    cin >> Dig_usuario;
    if (Dig_usuario > Lmenor )
    {
        if (Dig_usuario < Lmayor)
        { 
            a = Dig_usuario / Lmenor;
            b = Dig_usuario % Lmenor;
            cout << "esto es a: " << a << " esto es b: " << b << endl;
            // ahora suma
            c = a + b;
            if (c < 10)
            {
                cout << "te lo voy  invertir" << endl;
                c = b * 10 + a;
                cout << c << endl;
            }
            else
            {
                cout << "tu numero es mayor que 10" << endl;
                cout << c ;
            }
        }
    }
    else
    {
        cout << "tu numero no entra en el rango" << endl;
    }
}