#include <iostream>
#include <string>
#include <vector>
using namespace std;
string* ptrToElement(vector<string>* const pVec, int i);

int main()
{
    //el & es espacio de memoria
    //si no lo tienes se canvia el valos

    //
    vector<string inventory>;

    // con un asterisco se hace un punte
    int* pScore;
    //
    int score = 1000;
    //El puntero pScore agarra la referencia  del score y no lo modifica
    pScore = &score;

    // estos son espacios de memoria
    cout << "&score: " << &score <<endl;
    cout << "pScore: " << pScore <<endl;

    cout << "------------------" << endl;

    //esto es el contenido del puntero
    cout << "score: " << score << endl;
    cout << "*pScore: " << *pScore << endl;

    cout << "------------------" << endl;

    score += 500;

    cout << "score: " << score << endl;
    cout << "pScore: " << *pScore << endl;

    int newScore = 500;
    //siempre que queremos hacer un puntero hay que hacerlo con la
    //referencia que es el signo &
    
    pScore = &newScore;

    cout << "------------------" << endl;

    cout << "&score: " << &newScore << endl;
    cout << "pScore: " << pScore << endl;

    string str = "putitas";
    string* pStr = &str;
    cout << "------------------" << endl;

    cout << "str: " << str << endl;
    cout << "pStr: " << *pStr << endl;
    //Se puede pedir la catidad de letras en la palabra 
    //de las dos formas que hay en el cout
    cout << "------------------" << endl;
    cout << "(*pstr).size() is: " << pStr->size() << endl;

    *pScore += 500;

    int lives = 5;
    //los punteros hechos constante no se pueden modificar
    //aqui solo esta inicializando el espacio de memoria
    //esto es para tener constante el valor del espacio de memoria
    int* const pLives = &lives;

    //en este el constante es el entero
    const int* pNumber;


    //a los punteros les puedes  cambiar todo lo que no es constante
    //pero si tiene dos const esto no podrias modificar nada
    const int BONUS = 20;
    const int* const pBONUS = &BONUS;

    string str = *(ptrToElement(&inventory, 2));
    cout << str << endl;

}

string* ptrToElement(vector<string>* const pVec, int i)
{

}
