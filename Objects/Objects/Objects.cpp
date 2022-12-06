// Objects.cpp
#include <iostream>
#include <string>
using namespace std;

//esta clase tiene los componentes:
class Pet
    //falta un pet
{
public:
    string m_Name;
    int m_Hunger;
    int m_life = 300;
    int m_RandHit;
    int m_ProbablyHit;
    int m_CriticalHit;
    int m_shield;
    Pet(int R_hit, int C_hit, string name, int shield, int hunger = 0, int life = 300 );
    void Display();
    void Greet();
    int Hit();
};

Pet::Pet( int R_hit, int C_hit, string name,int shield, int hunger,int life )
{
    m_Name = name;

    m_life = life;
    
    m_RandHit = R_hit;
   
    m_CriticalHit = C_hit;
    
    m_Hunger = hunger;

    m_shield = shield;
    
    cout << endl;
}

void Pet::Display()
{
    cout << "This is your fither dog: " << m_Name << endl;
    cout << endl;
    cout << "This is the life of your fither dog: " << m_life << endl;
    cout << endl;
    cout << "ho shit you hit me bitch: " << m_RandHit << endl;
    cout << endl;
    cout << "FFFFFUUUUCCCCKKKK pussy you want to kill me?: " << m_CriticalHit << endl;
    cout << endl;
    cout << "i am hungry give me food now, my hungry level is: " << m_Hunger << endl;
    cout << endl;
    cout << "shield: " << m_shield << endl;
    cout << endl;
}

int Pet::Hit()
{
    m_ProbablyHit = 0 + rand() % 7;


    if (m_ProbablyHit <= 4)
    {
        cout << "ho shit you hit me bitch" << endl;
        cout << m_RandHit << endl;
        cout << endl;
        return m_RandHit;
    }
    if (m_ProbablyHit >= 6)
    {
        cout << "FFFFFUUUUCCCCKKKK pussy you want to kill me?" << endl;
        cout << m_CriticalHit << endl;
        cout << endl;
        return m_CriticalHit;
    }
    if (m_ProbablyHit == 5)
    {
        cout << "haaaaa pussy you didn't hit me" << endl;
       cout << m_ProbablyHit << endl;
       cout << endl;
       return m_ProbablyHit;
    }
    m_ProbablyHit = 0;
}

//puedes llamar a las funciones
void Pet::Greet()
{
    cout << "i am hungry give me food now, my hungry level is: " << m_Hunger <<endl;
    cout << endl;
}

int main()
{  //plato la semilla para que se randomie
    srand(time(NULL));
    int turno = 0;// empieza en el numero 0
    int k = 1; // letra de transicón
    int l = 300;
    int opcion;
    int Comida_pet = 1 + rand() % 9;// hambre
    int prob_h_c = 1 + rand() % 4;
    int H = 1 + rand() % 10;// hambre
    int x = 1 + rand() % 60;//normal
    int c = 60 + rand() % 100;//critico
    int S = 0;

    //(int R_hit, int C_hit, string name, int hunger = 0, int life = 300)
    //son los animales que se vana dar en su madre
    Pet pet1(x, c, "rabino", H, l, S);
    
    Pet pet2(x, c, "vino", H, l,S);


    pet1.m_Hunger = H;
    pet1.m_life = l;
    pet1.m_shield = S;

    pet2.m_Hunger = H;
    pet2.m_life = l;
    pet2.m_shield = S;
    

    cout << "Quien emlieza?" << endl;
    cout << "jugador 1 : 1" << endl;
    cout << "jugador 2 : 2" << endl;
    cin >> turno;
    

    //interacciòn
    switch (turno)
    {
    case 1:
        //pet 1

        pet1.Display();

        cout << "que accion quieres realizar" << endl;
        cout << "---------------------------------" << endl;
        cout << "     Atack : 1    food    : 2" << endl;
        cout << "Give shield: 3    Give up : 4" << endl;
        cout << "---------------------------------" << endl;
        cin >> opcion;
        if (opcion == 1)//pole un vergazo al otro vato
        {
            cout << "tienes cierta probabilidad de herrar el golpe" << endl;
            cout << "o a la harmadura" << endl;
            if (S != 0)
            {
                if (prob_h_c <= 2)//golpe normal
                {

                    cout << "la armadura del pet 2" << endl;
                    cout << pet2.m_shield << endl;
                    cout << endl;

                    cout << "es el putaso que te pone el pet 1 es en la armadura" << endl;
                    cout << pet1.m_RandHit << endl;
                    cout << "normal" << endl;
                    cout << "tu animal fue dañado en la armadura" << endl;
                    cout << pet2.m_shield - pet1.m_RandHit << endl;




                }
                if (prob_h_c >= 2)//golpe critico
                {

                    cout << "la vida del pet 2" << endl;
                    cout << pet2.m_shield << endl;
                    cout << endl;


                    cout << "es el putaso que te pone el pet 1" << endl;
                    cout << pet1.m_CriticalHit << endl;
                    cout << "critical" << endl;//es el putaso que te pone el pet 1
                    cout << "tu animal fue dañado" << endl;
                    cout << pet2.m_shield - pet1.m_CriticalHit << endl;
                }
            }
            else
            {
                if (prob_h_c <= 2)//golpe normal
                {

                    cout << "la vida del pet 2" << endl;
                    cout << pet2.m_life<< endl;
                    cout << endl;

                    cout << "es el putaso que te pone el pet 1" << endl;
                    cout << pet1.m_RandHit << endl;
                    cout << "normal" << endl;
                    cout << "tu animal fue dañado" << endl;
                    cout << pet2.m_life - pet1.m_RandHit << endl;
                
                }
                if (prob_h_c >= 2)//golpe critico
                {

                    cout << "la vida del pet 2" << endl;
                    cout << pet2.m_life << endl;
                    cout << endl;
                

                    cout << "es el putaso que te pone el pet 1" << endl;
                    cout << pet1.m_CriticalHit << endl;
                    cout << "critical" << endl;//es el putaso que te pone el pet 1
                    cout << "tu animal fue dañado" << endl;
                    cout << pet2.m_life - pet1.m_CriticalHit << endl;
                }
            }
            
            
        }
        if (opcion == 2)
        {
            cout << "este es tu porcentage de hambre" << endl;
            cout << pet1.m_Hunger << endl;
            cout << "este es tu nuevo nivel de habre" << endl;
            cout << pet1.m_Hunger - Comida_pet << endl;
            cout << endl;
        }
        if (opcion == 3)
        {
            
            //el daño no le va a dar a la vida si no que le da a la hermadura
            int S = 10 + rand() % 90;
            
            pet1.m_shield = S;

            cout << "esta es tu shield" << endl;
            cout << S << endl;

        }
        if (opcion == 4)
        {

            cout << "looser fukin pussy" << endl;

        }
        //Golpea al otro pendejo
        //dale comida


        turno++; //aumenta el turno al siguiente mono
        return turno;
        break;

    case 2:
        //pet 2
        cout << "que accion quieres realizar" << endl;
        cout << "---------------------------------" << endl;
        cout << "     Atack : 1    food    : 2" << endl;
        cout << "Give shield: 3    Give up : 4" << endl;
        cout << "---------------------------------" << endl;
        cin >> opcion;
        if (opcion == 1)
        {
            if (prob_h_c <= 1)//golpe normal
            {

                //pet1.Display();
                cout << "normal" << endl;
                cout << pet2.m_RandHit << endl;
                cout << "la vida del pet 1" << endl;
                cout << pet1.m_life - pet2.m_RandHit<< endl;
                
            }
            if (prob_h_c >= 2)//golpe critico
            {
                //pet1.Display();
                cout << "es el putaso que te pone el pet 2" << endl;
                cout << "critical" << endl;//es el putaso que te pone el pet 1
                cout << pet2.m_CriticalHit << endl;
                cout << "la vida del pet 1" << endl;
                cout << pet1.m_life - pet2.m_CriticalHit<< endl;
                
            }
        }
        if (opcion == 2)
        {
            cout << "este es tu nivel de hambre" << endl;
            cout << pet2.m_Hunger<< endl;
            cout << "este es tu nuevo nivel de habre" << endl;
            cout << pet2.m_Hunger - Comida_pet  << endl;
            cout << endl;

        }
        if (opcion == 3)
        {
            //el daño no le va a dar a la vida si no que le da a la hermadura
            int S = 10 + rand() % 90;
            pet2.m_shield = S;
            

        }
        if (opcion == 4)
        {

            cout << "looser fukin pussy" << endl;

        }

        //Golpea al otro pendejo
        //dale comida
        //regresa el turno al anterior
        turno = 1;
        return turno;
        break;
    }
    

   //pet1.m_Name = "Rabino";
    //pet2.m_Name = "vino";

    //pet1.m_RandHit = 1 + rand() % 60;//punch hit
    //pet2.m_RandHit = 1 + rand() % 60;//punch hit

    //pet1.m_CriticalHit = 70 + rand() % 100;//hurt hit
    //pet2.m_CriticalHit = 70 + rand() % 100;//hurt hit


    //pet1.m_Hunger = 9;
   // cout << "Pet1-Level hungry: " << pet1.m_Hunger <<endl;
    //cout << endl;
    //pet2.m_Hunger = 4;
   // cout << "Pet2-Level hungry: " << pet2.m_Hunger << endl;
    //cout << endl;

    //cout << "your name pet name is: " << pet1.m_Name << endl;
    //cout << endl;
    //cout << "your name pet name is: " << pet2.m_Name << endl;
    //cout << endl;


   // pet1.Display();
   // pet2.Display();

    //pet1.Greet();
    //pet2.Greet();

    //pet2.Hit();
    //pet1.Hit();


}
