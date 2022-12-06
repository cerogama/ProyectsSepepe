// Examen2_porfavorNoLoBorren.cpp:

#include <iostream>
using namespace std;

int main()
{
	int ejercicio = 0, lim = 500,lima = 7, a = 1, b = 1, d = 2, c = 1, suma5 = 5, suma3 = 3, z = 0 , t = 0, y = 0, u = 0, p = 0 ;

	cout << "ingresa el numero de ejercicio" << endl;
	cin >> ejercicio;

	switch (ejercicio)
	{
	case 1:
		
		cout << "este es tu ejersicio 1: " << endl;
		//dos numeros  sucecivos que vallan aumentando uno si uno no
		for (int i = 0; i< lima; i++)
		{
			for (int j = 0; j < lima; j++)
			{
				if (a < 5 || b< 5)
				{
					cout << j << " " << a<< endl;
					
					j++;
					cout << j << " " << b << endl;
					
				}
				a++;
				b++;
			}
		}
		break;
	case 2:
		cout << "este es tu ejersicio 2: " << endl;
		//dos numeros  sucecivos que vallan aumentando uno si uno no
		for (int i = 0; i < lima; i++)
		{
			for (int j = 0; j < lima; j++)
			{
				if (t < 5 || y < 5)
				{
					cout << j << " " << t << endl;
					
					j++;
					cout << j << " " << u << endl;
					j++;
					
				}
				cout << j << " " << y << endl;
				j++;
				cout << j << " " << p << endl;
					y++;
					t++;
					u++;
					p++;
			}
		}
		break;
		
case 3:

		cout << "este es tu ejersicio 3: " << endl;
		//dos numeros  sucecivos que vallan aumentando uno si uno no
		
			for (int j = 0; j < lim; j++)
			{
				if (z < 2500)
				{
					cout  << " " << d << endl;
					 c = d + suma5; // esto es 5
					j++;
					cout << " " << c << endl;
					 d = c+ suma3; // suma 3
					 

					 z = d + c;
					 cout << "esta es la suma de tus dos valores anteriores" << z << endl;
				}
				if (z > 2500)
				{
					cout << "estas fuera del limite" << endl;
				}
			}

		


	default:
		break;
	}
}


