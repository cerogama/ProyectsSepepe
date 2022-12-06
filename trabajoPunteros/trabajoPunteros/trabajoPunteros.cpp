
#include <iostream>
#include <string>

using namespace std;

void Police(int* const array, const int Num_Element);
void Display(const int* const array, const int Num_Element);

int main()
{
    cout << "creating an array of high score" << endl;
    const int Num_Score = 3;
    int highSore[Num_Score] = { 5000, 3000, 2000 };

    cout << "Displaying score using pointer "<< endl;
    cout <<*highSore << endl;
    cout << *(highSore + 1)<< endl;
    cout << *(highSore + 2) << endl;


    cout << "Increasing score whit pointers" << endl;
    Police(highSore, Num_Score);

    cout << "Dysplay Score" << endl;
    Display(highSore, Num_Score);
}
    //increase(incremento)
void Police(int* const array, const int Num_Element)
{
    for (int i = 0; i < Num_Element; i++)
    {
        array[i]+= 500; 

    }
}

void Display(const int* const array, const int Num_Element)
{
    for (int i = 0; i < Num_Element; i++)
    {
        cout << array[i] << endl;
    }
}