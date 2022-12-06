#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int ejercicio;
	int b = 1, a = 0;
	int x;
	vector<int> Vector;
	vector<int> VectorFib;
    
	cout << "1_.Usando ciclos anidados generar las ternas de numeros " << endl;
	cout << "2._Leer 12 enteros, almacenarlos en un vector y determinar cuál de esos enteros es el mayor" << endl;
	cout << "3._Cargar un Vector de 10 posiciones con los 10 primeros elementos de la serie de Fibonacci y mostrarlo en pantalla " << endl;
	cout << "4._Leer 8 enteros, almacenarlos en un vector y determinar cuántas veces se está repitiendo el número mayor " << endl;
	cout << "5._Leer 10 enteros, almacenarlos en un vector y determinar en qué posición(índice) del vector se encuentran los números terminados en 4 " << endl;
	cout << "6._Leer 7 enteros, almacenarlos en un vector y determinar en qué posición está el número con más digitos." << endl;
	cout << "7._Leer 10 números enteros almacenarlos en un vector y calcular el factorial de cada uno de los numeros que contiene el vector estos factoriales deben ser almacenados en otro vector y mostrarlos en pantalla. " << endl;
	
	cout << "elige el ejercicio" << endl;
	cin >> ejercicio;
	cout << "------------" << endl;
    
	switch (ejercicio)
	{
	case 1:

		for (int x = 1; x < 10; x++)
		{
			for (int i = 1; i < 4; i++)
			{
				for (int j = 1; j < 4; j++)
				{
					cout << x << " " << i << " " << j << endl;
					x++;
				}
			}
		}

		break;
	case 2:
		cout << "ingrea 12 numeros enteros, y determinare el mas grande" << endl;
		for (int i = 0; i < 13; i++)
		{
			cout << "ingresa el numero: " << i << endl;
			cin >> x;

			Vector.push_back(x);
			cout << "---------" << endl;
		}
		
		for (int i = 0; i < Vector.size(); i++)
		{
			cout << Vector[i] << endl;
		}

		if (Vector[1] > Vector[2] && Vector[1] > Vector[3] && Vector[1] > Vector[4] && Vector[1] > Vector[5] && Vector[1] > Vector[6] && Vector[1] > Vector[7] && Vector[1] > Vector[8] && Vector[1] > Vector[9] && Vector[1] > Vector[10] && Vector[1] > Vector[11] && Vector[1] > Vector[12])
		{
			cout << "tu numero " << Vector[1] << " es el mas grande" << endl;
		}
		if (Vector[2] > Vector[1] && Vector[2] > Vector[3] && Vector[2] > Vector[4] && Vector[2] > Vector[5] && Vector[2] > Vector[6] && Vector[2] > Vector[7] && Vector[2] > Vector[8] && Vector[2] > Vector[9] && Vector[2] > Vector[10] && Vector[2] > Vector[11] && Vector[2] > Vector[12])
		{
			cout << "tu numero " << Vector[2] << " es el mas grande" << endl;
		}
		if (Vector[3] > Vector[1] && Vector[2] < Vector[3] && Vector[3] > Vector[4] && Vector[3] > Vector[5] && Vector[3] > Vector[6] && Vector[3] > Vector[7] && Vector[3] > Vector[8] && Vector[3] > Vector[9] && Vector[3] > Vector[10] && Vector[3] > Vector[11] && Vector[3] > Vector[12])
		{
			cout << "tu numero " << Vector[3] << " es el mas grande" << endl;
		}
		if (Vector[4] > Vector[1] && Vector[4] > Vector[3] && Vector[2] < Vector[4] && Vector[4] > Vector[5] && Vector[4] > Vector[6] && Vector[4] > Vector[7] && Vector[4] > Vector[8] && Vector[4] > Vector[9] && Vector[4] > Vector[10] && Vector[4] > Vector[11] && Vector[4] > Vector[12])
		{
			cout << "tu numero " << Vector[4] << " es el mas grande" << endl;
		}
		if (Vector[5] > Vector[1] && Vector[5] > Vector[3] && Vector[2] < Vector[5] && Vector[4] < Vector[5] && Vector[5] > Vector[6] && Vector[5] > Vector[7] && Vector[5] > Vector[8] && Vector[5] > Vector[9] && Vector[5] > Vector[10] && Vector[5] > Vector[11] && Vector[5] > Vector[12])
		{
			cout << "tu numero " << Vector[5] << " es el mas grande" << endl;
		}
		if (Vector[6] > Vector[1] && Vector[6] > Vector[3] && Vector[2] < Vector[6] && Vector[4] < Vector[6] && Vector[6] > Vector[5] && Vector[6] > Vector[7] && Vector[6] > Vector[8] && Vector[6] > Vector[9] && Vector[6] > Vector[10] && Vector[6] > Vector[11] && Vector[6] > Vector[12])
		{
			cout << "tu numero " << Vector[6] << " es el mas grande" << endl;
		}
		if (Vector[7] > Vector[1] && Vector[7] > Vector[3] && Vector[2] < Vector[7] && Vector[4] < Vector[7] && Vector[7] > Vector[5] && Vector[7] > Vector[6] && Vector[7] > Vector[8] && Vector[7] > Vector[9] && Vector[7] > Vector[10] && Vector[7] > Vector[11] && Vector[7] > Vector[12])
		{
			cout << "tu numero " << Vector[7] << " es el mas grande" << endl;
		}
		if (Vector[8] > Vector[1] && Vector[8] > Vector[3] && Vector[2] < Vector[8] && Vector[4] < Vector[8] && Vector[8] > Vector[5] && Vector[8] > Vector[6] && Vector[8] > Vector[7] && Vector[8] > Vector[9] && Vector[8] > Vector[10] && Vector[8] > Vector[11] && Vector[8] > Vector[12])
		{
			cout << "tu numero " << Vector[8] << " es el mas grande" << endl;
		}
		if (Vector[9] > Vector[1] && Vector[9] > Vector[3] && Vector[2] < Vector[9] && Vector[4] < Vector[9] && Vector[9] > Vector[5] && Vector[9] > Vector[6] && Vector[9] > Vector[7] && Vector[9] > Vector[8] && Vector[9] > Vector[10] && Vector[9] > Vector[11] && Vector[9] > Vector[12])
		{
			cout << "tu numero " << Vector[9] << " es el mas grande" << endl;
		}
		if (Vector[10] > Vector[1] && Vector[10] > Vector[3] && Vector[2] < Vector[10] && Vector[4] < Vector[10] && Vector[10] > Vector[5] && Vector[10] > Vector[6] && Vector[10] > Vector[7] && Vector[10] > Vector[8] && Vector[10] > Vector[9] && Vector[10] > Vector[11] && Vector[10] > Vector[12])
		{
			cout << "tu numero " << Vector[10] << " es el mas grande" << endl;
		}
		if (Vector[11] > Vector[1] && Vector[11] > Vector[3] && Vector[2] < Vector[11] && Vector[4] < Vector[11] && Vector[11] > Vector[5] && Vector[11] > Vector[6] && Vector[11] > Vector[7] && Vector[11] > Vector[8] && Vector[11] > Vector[9] && Vector[11] > Vector[10] && Vector[11] > Vector[12])
		{
			cout << "tu numero " << Vector[11] << " es el mas grande" << endl;
		}
		if (Vector[12] > Vector[1] && Vector[12] > Vector[3] && Vector[2] < Vector[12] && Vector[4] < Vector[12] && Vector[12] > Vector[5] && Vector[12] > Vector[6] && Vector[12] > Vector[7] && Vector[12] > Vector[8] && Vector[12] > Vector[9] && Vector[12] > Vector[10] && Vector[12] > Vector[11])
		{
			cout << "tu numero " << Vector[12] << " es el mas grande" << endl;
		}

		break;
	case 3:
		cout << "3._Cargar un Vector de 10 posiciones con los 10 primeros elementos de la serie de Fibonacci y mostrarlo en pantalla" << endl;
		
			for (int i = 1; i < 11; i++)
			{
				b = b + a;

				a = b - a;

				VectorFib.push_back(a);
				
				cout << "-" << a << "- ";
				cout << endl;
			}	                                                                                                                                                                                      
		break;
	case 4:



		break;
	case 5:

		break;
	case 6:

		break;
	case 7:

		break;
	default:
		break;
	}

}


