// Cousin´sNumbers.cpp 
#include <iostream>
using namespace std;

void main()
{
    
    int primo = 0, Rmin = 0, Rmax = 0, Div = 0;
    cout << "ingrea el rango minimo" << endl;
    cin >> Rmin;
    cout << "ingrea el rango maximo" << endl;
    cin >> Rmax;

    for (int i = Rmin; i < Rmax; i++)
    {
        Div = 0;
        for (int j = 1; j <= i; j++)
        {
            if ((i % j) == 0)
            {
                Div++;

            }
        }
        if (Div == 2)
        {
            cout << i << endl;
        }   
    }
    return;
}

