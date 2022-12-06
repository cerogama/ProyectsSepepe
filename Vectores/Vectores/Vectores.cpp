#include <vector>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;


int main()
{
   /* vector<string> myStuff = {"espada", "martillo", "bomba"};
    vector<string> inventario(10);// el numero es el tamaño
    vector<string> inventario(10, "empty");
    vector<string> inventario(myStuff);*/

    vector<string> inventario;

    inventario.push_back("El dedo");
    inventario.push_back("dos dedos");
    inventario.push_back("tres dedos");

    cout << "tienes: " << inventario.size() << " dedos adentro jajjajaja" << endl;

    for (int i = 0; i < inventario.size(); i++)
    {
        cout << inventario[i] << endl;
    }

    cout << "cambiaste tus dedos " << inventario[1] << " por un consolador" << endl;;
    inventario[1] = "consolador";
    

    for (int j = 0; j < inventario.size(); j++)
    {
        cout << inventario[j] << endl;
    }

    cout << "te destrosaste tres desos " << endl;
    inventario.pop_back();

    for (int i = 0; i < inventario.max_size(); i++)
    {
        cout << inventario[i] << endl;
    }
 
    cout << "perdiste todo, ya no eres feliz" << endl;
    inventario.clear();

    if (inventario.empty())
    {
        cout << "no tienes ni madres" << endl;
    }
    else
    {
        cout << "te quedo algo para mendigar" << endl;
    }
}

