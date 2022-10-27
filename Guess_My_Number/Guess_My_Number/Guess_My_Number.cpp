// Guess_My_Number

#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
	//numero random
	int R = 50;
	//
	int Rang_max= 100;
	int Min_rang = 0;
	// numero del jugador
	int num_player;
	bool cicle = true;

	// Nesecitamos que el usuario nos de una letra para un numero mayor o menor
	int h = 100, l = 0, player = 0 ;

	srand(time(NULL));//la maquina te da un numero

	R = rand() % (100 - 1);
	
	do
	{
		cout << "tu numero es mas alto que "<< R << endl;
		cout << " ingresa (1) para si, (2) para no  (3) le atinaste" << endl;
		cin >> player;
		if (player == 1)// si (es mayor)
		{ 
			l = R;

			cout << h << ">" << l << endl;
			
			
			R = rand() % (h + l + l);// hace tu numero menor

			R = R - h;
			
			srand(time(NULL));
		}

		if(player == 2)// no (es menor)
		{ 
			h = R;// lower = rango random

			//cout << l << endl;
			cout << h << ">" << l << endl;

			

			R = rand() % (h - l);

			R = R - h;


			srand(time(NULL));
		}
		if (player == 3)
		{
			cout << " win" << endl;
			cicle = false;
		}
		//

		// actualiza el numero

	}while(cicle);
		//num = 1 + rand() % (11 - 1);
	
} 

