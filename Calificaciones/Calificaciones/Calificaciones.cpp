#include <iostream>
using namespace std;

int main()
{
    int Alumnos = 0, Calificacion1 = 0, Calificacion2 = 0, a = 0, b = 0, promedio = 0 ;

    cout << " Cuantos alumnos tienes? " << endl;
    cin >> Alumnos;

    for (int i = 0; i < Alumnos; i++)
    {
        
        cout << "Dame la calificacion del alumno: " << i << endl;
        cin >> Calificacion1;
        

        a = Calificacion1 + Calificacion2;

    }

    

    promedio = Calificacion1 % Alumnos;
    
    cout << "este es el promedio enbace a los alumnos que tienes: " << promedio;

}