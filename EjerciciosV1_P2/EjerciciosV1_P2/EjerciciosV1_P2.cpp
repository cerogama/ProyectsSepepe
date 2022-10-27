#include <iostream>
using namespace std;
/*
1_ Leer un número entero y determinar si tiene 3 dígitos.  ----
2_ Leer un número entero de 3 dígitos y determinar en que posición está el dígito mayor. ----
3_ Leer 3 número enteros y mostrarlos ascendentemente. ----
4_ Leer dos número enteros de 2 dígitos cada uno y determinar en cual de ellos se encuentra el dígito mayor.
5_ Leer un número entero de 3 dígitos y determinar cuántos dígitos pares tiene.
6_ Leer un número entero de tres dígitos y determinar si alguno de sus dígitos es igual a la suma de los otros dos.
7_ Leer un número entero de 4 dígitos y determinar cuántos dígitos impares tiene.
8_ Leer un número entero de 4 dígitos  y determinar si tiene más dígitos pares o impares. Ejemplo 3457 -> Este número tiene más dígitos impares que pares.
9_ Leer dos números enteros cada uno de dos dígitos y si la diferencia(la resta) entre los dos números es par entonces mostrar en pantalla la suma de los dígitos de los números,
si dicha diferencia es un número primo entonces mostrar en pantalla el producto de los dos números, si el número es impar mayor a 10, mostrarlo invertido.

*/


int main()
{
    int ejercicio = 0;
    int user = 0, Lmenor = 99, Lmayor = 999;
    int Lmenor1 = 99, Lmayor1 = 999, user1 = 0, a = 0, b = 0, c = 0, d = 0, e = 0;
    int Acen1 = 0, Acen2 = 0, Acen3 = 0;
    cout << "1_ Leer un número entero y determinar si tiene 3 dígitos." << endl;
    cout << "2_ Leer un número entero de 3 dígitos y determinar en que posición está el dígito mayor." << endl;
    cout << "3_ Leer 3 número enteros y mostrarlos ascendentemente." << endl;
    cout << "4_ Leer dos número enteros de 2 dígitos cada uno y determinar en cual de ellos se encuentra el dígito mayor." << endl;
    cout << "5_ Leer un número entero de 3 dígitos y determinar cuántos dígitos pares tiene." << endl;
    cout << "6_ Leer un número entero de tres dígitos y determinar si alguno de sus dígitos es igual a la suma de los otros dos." << endl;
    cout << "7_ Leer un número entero de 4 dígitos y determinar cuántos dígitos impares tiene." << endl;
    cout << "8_ Leer un número entero de 4 dígitos  y determinar si tiene más dígitos pares o impares. Ejemplo 3457 -> Este número tiene más dígitos impares que pares." << endl;
    cout << "" << endl;
    cout << "elige el ejercicio que quieres realizar " << endl;
    cin >> ejercicio;

    switch (ejercicio)
    {
    case 1:
       
        if (user > Lmenor && user < Lmayor)
        {
            cout << "tu numero: " << user << " cuenta con 3 numeros" << endl;
        }
        else
        {
            cout << "tu numero no cuenta con tres digitos o sobrepasa los 3 digitos a tres numeros" << endl;
        }

    
        break;// aqui se acaba el case

    case 2:
        
        

        cout << "ingresa un numero entero de 3 digitos: " << endl;
        cin >> user1;
        if (user1 > Lmenor1 && user1 < Lmayor1)
        {
            /*
            a = numero / 1000;
            b = (numero % 1000) / 100;
            c = (numero % 1000) % 100 / 10;
            d = ((numero % 10000) % 1000) % 100 / 10;
            e = (((numero % 10000) % 1000) % 100) % 10;
        |   */

        // a = user / 999;
            a = (user1 % 999) / 100;
            b = (user1 % 999) % 100 / 10;
            c = ((user1 % 999) % 100) % 10 / 1;

            cout << "tu numero: " << user1 << " cuenta con 3 numeros" << endl;

            cout << "tu numero a: " << a << endl;
            cout << "tu numero b: " << b << endl;
            cout << "tu numero c: " << c << endl;
            if (a > b && a > c)
            {
                cout << "tu numero mayor es el primero: " << a << endl;
            }
            if (b > a && b > c)
            {
                cout << "tu numero mayor es el segundo: " << b << endl;
            }
            if (c > a && c > b)
            {
                cout << "tu numero mayor es el ultimo: " << c << endl;
            }



        }
        else
        {
            cout << "tu numero no cuenta con tres digitos o sobrepasa los 3 digitos a tres numeros" << endl;
        }
    
        break;

    case 3:

        
        cout << endl;
        cout << "Ejercicio 3.- ";
        cout << endl;
        cout << "Ahora te pedire tres numeros de tres cifras, en base a eso se mostraran de forma acendente" << endl;
        cout << "ingrese su primer numero: " << endl;
        cin >> Acen1;
        cout << endl;
        cout << "ingrese su segundo numero numero: " << endl;
        cin >> Acen2;
        cout << endl;
        cout << "ingrese su tercer numero numero" << endl;
        cin >> Acen3;
        cout << endl;

        if (Acen1 > Acen2 && Acen1 > Acen3)//Acen1 es mayor
        {
            cout << "tu numero mayor es: " << endl;
            cout << Acen1 << endl;
            if (Acen2 > Acen3)
            {
                cout << "tu segundo numero es: " << endl;
                cout << Acen2 << endl;
                cout << "tu tercer numero es: " << endl;
                cout << Acen3 << endl;
            }
            if (Acen3 > Acen2)
            {
                cout << "tu segundo numero es: " << endl;
                cout << Acen3 << endl;
                cout << "tu tercer numero es: " << endl;
                cout << Acen2 << endl;
            }
        }
        if (Acen2 > Acen1 && Acen2 > Acen3)//Acen2 es mayor
        {
            cout << "tu numero mayor es: " << endl;
            cout << Acen2 << endl;

            if (Acen1 > Acen3)
            {
                cout << "tu segundo numero es: " << endl;
                cout << Acen1 << endl;
                cout << "tu tercer numero es: " << endl;
                cout << Acen3 << endl;
            }
            if (Acen3 > Acen1)
            {
                cout << "tu segundo numero es: " << endl;
                cout << Acen3 << endl;
                cout << "tu tercer numero es: " << endl;
                cout << Acen1 << endl;
            }
        }
        if (Acen3 > Acen2 && Acen1 < Acen3)//Acen3 es mayor
        {
            cout << "tu numero mayor es: " << endl;
            cout << Acen3 << endl;

            if (Acen2 > Acen1)
            {
                cout << "tu segundo numero es: " << endl;
                cout << Acen2 << endl;
                cout << "tu tercer numero es: " << endl;
                cout << Acen1 << endl;
            }
            if (Acen1 > Acen2)
            {
                cout << "tu segundo numero es: " << endl;
                cout << Acen1 << endl;
                cout << "tu tercer numero es: " << endl;
                cout << Acen2 << endl;
            }
        }
    default:
        break;
    }
}
    /*cout << "Ejercicio 1 y 2.- ";
    cout << endl;
    int Lmenor = 99, Lmayor = 999, user = 0, a = 0, b = 0, c = 0, d = 0, e = 0;
    
    cout << "ingresa un numero entero de 3 digitos: " << endl;
    cin >> user;
    if (user > Lmenor && user < Lmayor)
    {
        
         a = numero / 1000;
             b = (numero % 1000) / 100;
             c = (numero % 1000) % 100 / 10;
             d = ((numero % 10000) % 1000) % 100 / 10;
             e = (((numero % 10000) % 1000) % 100) % 10;
        

        // a = user / 999;
        a = (user % 999) / 100;
        b = (user % 999) % 100 / 10;
        c = ((user % 999) % 100) % 10 / 1;

        cout << "tu numero: " << user << " cuenta con 3 numeros" << endl;

        cout << "tu numero a: " << a << endl;
        cout << "tu numero b: " << b << endl;
        cout << "tu numero c: " << c << endl;
        if (a > b && a > c)
        {
            cout << "tu numero mayor es el primero: " << a << endl;
        }
        if (b > a && b > c)
        {
            cout << "tu numero mayor es el segundo: " << b << endl;
        }
        if (c > a && c > b)
        {
            cout << "tu numero mayor es el ultimo: " << c << endl;
        }



    }
    else
    {
        cout << "tu numero no cuenta con tres digitos o sobrepasa los 3 digitos a tres numeros" << endl;
    }

int Acen1 = 0, Acen2 = 0, Acen3 = 0;
    cout << endl;
    cout << "Ejercicio 3.- ";
    cout << endl;
    cout << "Ahora te pedire tres numeros de tres cifras, en base a eso se mostraran de forma acendente" << endl;
    cout << "ingrese su primer numero: "<< endl;
    cin >> Acen1;
    cout << endl;
    cout << "ingrese su segundo numero numero: " << endl;
    cin >> Acen2;
    cout << endl;
    cout << "ingrese su tercer numero numero" << endl;
    cin >> Acen3;
    cout << endl;
    
    if (Acen1 > Acen2 && Acen1 > Acen3)//Acen1 es mayor
    {
        cout << "tu numero mayor es: " << endl;
        cout << Acen1 << endl;
        if (Acen2 > Acen3)
        {
            cout << "tu segundo numero es: " << endl;
            cout << Acen2 << endl;
            cout << "tu tercer numero es: " << endl;
            cout << Acen3 << endl;
        }
        if (Acen3> Acen2)
        {
            cout << "tu segundo numero es: " << endl;
            cout << Acen3 << endl;
            cout << "tu tercer numero es: " << endl;
            cout << Acen2 << endl;
        }
    }
    if (Acen2 > Acen1 && Acen2 > Acen3)//Acen2 es mayor
    {
        cout << "tu numero mayor es: " << endl;
        cout << Acen2 << endl;
        
        if (Acen1 > Acen3)
        {
            cout << "tu segundo numero es: " << endl;
            cout << Acen1 << endl;
            cout << "tu tercer numero es: " << endl;
            cout << Acen3 << endl;
        }
        if (Acen3 > Acen1)
        {
            cout << "tu segundo numero es: " << endl;
            cout << Acen3 << endl;
            cout << "tu tercer numero es: " << endl;
            cout << Acen1 << endl;
        }
    }
    if (Acen3 > Acen2 && Acen1 < Acen3)//Acen3 es mayor
    {
        cout << "tu numero mayor es: " << endl;
        cout << Acen3 << endl;
        
        if (Acen2 > Acen1)
        {
            cout << "tu segundo numero es: " << endl;
            cout << Acen2 << endl;
            cout << "tu tercer numero es: " << endl;
            cout << Acen1 << endl;
        }
        if (Acen1 > Acen2)
        {
            cout << "tu segundo numero es: " << endl;
            cout << Acen1 << endl;
            cout << "tu tercer numero es: " << endl;
            cout << Acen2 << endl;
        }
    }


}
*/
/*
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
*/


